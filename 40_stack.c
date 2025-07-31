#include<stdio.h>

int top=-1,stack[5];

void push(int n)//100
{
    if(top==5-1)//0
    {
        printf("satck is overflow\n");
    }
    else
    {
        top++;//0
        stack[top]=n;//0,100
        printf("stack is push successfully : %d\n",n);//100
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is deleted successfully : %d\n",stack[top]);//100
        top--;//0
    }
}
void display()
{
    for (int i = 0; i <=top; i++)
    {
        printf("%d\n",stack[i]);//100
    }
    
}

int main()
{
    int choise,n;
    while(1)
    {
        printf("1.push\n 2.pop\n3.display\n4.exit\n");
        printf("Enter choice :");
        scanf("%d",&choise);//1

        switch (choise)//1
        {
           case 1:
              printf("Enter number for push operartion :");
              scanf("%d",&n);//100
              push(n);//100
              break;
           case 2:
                pop();
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