#include <stdio.h>
#include <fcntl.h>      // For O_CREAT, O_RDWR
#include <sys/stat.h>   // For mode_t
#include <mqueue.h>     // For mq_open, mq_attr

int main() {
    mqd_t mq;                      // Message queue descriptor
    struct mq_attr attr;          // Queue attributes

    // Set queue attributes
    attr.mq_flags = 0;            // Blocking mode
    attr.mq_maxmsg = 10;          // Max 10 messages
    attr.mq_msgsize = 256;        // Max size per message
    attr.mq_curmsgs = 0;          // Current messages (read-only)

    mq = mq_open("/myqueue", O_CREAT | O_RDWR, 0660, &attr);
    if (mq == -1) {
        perror("mq_open failed");
        return 1;
    } else {
        printf("Message Queue created successfully\n");
    }

    mq_close(mq);
    return 0;
}