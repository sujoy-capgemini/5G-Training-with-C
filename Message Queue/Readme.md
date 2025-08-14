##Message Queue:

    * A Message Queue is a type of inter-process-communication(IPC) mechanisum that allow tow or more process 
      communication with eatch other .using sender and reciver.
    * It is asynchonus communication : means sender reciver does not acctive same time.
    * Work like queue (FIFO -techinq)
    * each message have a message type -like (String)
    * its also used Unix system. means one system.


#Cretion(Syntax):
    *message queue cretion using a function  mq_open()
     
    1. mqd_t mq_open(const char* name,int oflag);
    2. mqd_t mq_open(const char* name,int oflag,mode_t mode,struct mq_attr *attr);

    name-> this is the queue name .
    oflag->How open queue like(Read Write)
    mode ->Who access the queue Ex:0660
    attr -> configaration means queue size 


#Enqueue():
   *Adding item to the queue.
   *Send message using ->  mq_send()

#Dequeue():
   *Removing item to the Queue.
   *Reciving message using ->  mq.recive()


