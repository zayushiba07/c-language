#include<stdio.h>

struct student
{
    int rollno;
    int subjects_mark[5];  // Array to store 5 subject marks
    int total;
    float avg;
    char s_name[30];
};

int main()
{
    struct student s1;
    int i;

    s1.total = 0; // Initialize total before use

    printf("Enter student roll no: ");
    scanf("%d", &s1.rollno);

    printf("Enter student name: ");
    scanf("%s", s1.s_name);  

    for(i = 0; i < 5; i++)
    {
        printf("Enter subject marks [%d]: ", i + 1);
        scanf("%d", &s1.subjects_mark[i]);
        s1.total += s1.subjects_mark[i];
    }

    s1.avg = s1.total / 5.0; 

    printf("\n--- Student Details ---\n");
    printf("Roll No   : %d\n", s1.rollno);
    printf("Name      : %s\n", s1.s_name);

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d Marks: %d\n", i + 1, s1.subjects_mark[i]);
    }

    printf("Total Marks: %d\n", s1.total);
    printf("Average Marks: %.2f\n", s1.avg);

    return 0;
}
