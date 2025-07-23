#include<stdio.h>

int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int r_no,marks[size],total=0,avg;

    printf("Enter roll no of student :");
    scanf("%d",&r_no);

    for(int i=1;i<=size;i++)
    {
        printf("Enter marks of subject :");
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    printf("student roll no :%d\n",r_no);
    for(int i=1;i<=size;i++)
    {
        printf("subject marks :%d\n",marks[i]);
    }
    //total = total + marks[size];
    printf("total is :%d\n",total);
    avg = total / size;
    printf("avg is :%d\n",avg);
    return 0;
}