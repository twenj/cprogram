int main(int argc, char* argv[])
{
    /* 如何索引 poll 返回的就绪文件描述符 */
    int ret = poll(fds, MAX_EVENT_NUMBER, -1);
    /* 必须遍历所有已注册文件描述符并找到其中的就绪者（当然，可以利用 ret 来稍作优化） */
    for (int i = 0; i < MAX_EVENT_NUMBER; ++i) 
    {
        if (fds[i].revents & POLLIN) // 判断第 i 个文件描述符是否就绪
        {
            int sockfd = fds[i].fd;
            /* 处理 sockfd */
        }
    }

    /* 如何索引 epoll 返回的就绪文件描述符 */
    int ret = epoll_wait(epollfd, events, MAX_EVENT_NUMBER, -1);
    /* 仅遍历就绪的 ret 个文件描述符 */
    for (int i = 0; i < ret; i++) 
    {
        int sockfd = events[i].data.fd;
        /* sockfd 肯定就绪，直接处理 */
    }
}