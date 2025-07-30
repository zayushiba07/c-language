#include<stdio.h>

struct employee
{
    int e_id,salary;
    char e_name[30];
};
int main()
{
      struct employee e1;
      printf("Enter employee id :");
      scanf("%d",&e1.e_id);
      printf("Enter employee name :");
      scanf("%s",e1.e_name);
      printf("Enter employee salary :");
      scanf("%d",&e1.salary);
      printf("Employee id is :%d\n",e1.e_id);
      printf("Employee name is :%s\n",e1.e_name);
      printf("Employee salary is :%d\n",e1.salary);
      return 0;
}