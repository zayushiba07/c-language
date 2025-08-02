#include<stdio.h>

int queue[5];
int front=-1,rear=-1;

void enqueue(int no)
{
    if(rear==5-1)
    {
        printf("queue is full\n");
    }
    if(front == -1)
    {
        front = 0;
    }
    queue[++rear]=no;
    printf("queue added :%d\n",no);
}
void dequeue()
{
    if(rear == -1||front > rear)
    {
        printf("queue is empty\n");
    }
    printf("queue deleted :%d\n",queue[front++]);
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}

int main()
{
    int choise,n;
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter choice :");
        scanf("%d",&choise);//1

        switch (choise)//1
        {
           case 1:
              printf("Enter number for enqueue operartion :");
              scanf("%d",&n);//100
              enqueue(n);//100
              break;
           case 2:
                dequeue();
                break;
           case 3:
                display();
                break;
           case 4:
                break;
        }
        if(choise==4)
       {
           break;
       }
    }
    return 0;  
}