#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "base.c"

#define MAXWORD 100

struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
};

#define HASHSIZE 101
static struct nlist *hashtab[HASHSIZE];

/* word frequency count */
int main()
{

}

unsigned hash(char *s)
{
    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

struct nlist *lookup(char *s)
{
    struct nlist *np;

    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->name) == 0)
            return np;
    return NULL;
}

#include <stdlib.h>
struct nlist *lookup(char *);
char *tstrdup(char *);

struct nlist *install(char *name, char *defn)
{
    struct nlist *np;
    unsigned hashval;

    if ((np = lookup(name)) == NULL) {
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = tstrdup(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    } else
        free((void *) np->defn);
    if ((np->defn = tstrdup(defn)) == NULL)
        return NULL;
    return np;
}


char *tstrdup(char *s)
{
    char *p;
    p = (char *) malloc(sizeof(s));

    if(p != NULL)
        strcpy(p, s);
    return p;
}