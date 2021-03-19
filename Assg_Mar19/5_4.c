/*Declare a structure to store the following information of an employee
(a) Employee Code
(b) Employee Name
(c) Salary
(d) Department number
(e) Date of joining (it is itself a structure consisting of day, month and year)
Write a program that can take above informations about 10 employee and Display informations for those
employees whose Salary ≥ 10000.*/
#include<stdio.h>
struct Join
{
    int day;
    int month;
    int year;
};
struct Employee 
{
    int code;
    char name[23];
    int salary;
    int dept_no;
    struct Join date;
}info[10];
int main()
{
    printf("\n Enter Data:\n");
    for(int i = 0; i<10; i++)
    {
        printf("\nFor %i",i);
        printf("Employee Code:");
        scanf("%i", &info[i].code);
        printf("Employee Name:");
        scanf("%s", &info[i].name);
        printf("Employee Salary:");
        scanf("%i", &info[i].salary);
        printf("Employee Dept. No.:");
        scanf("%i", &info[i].dept_no);
        printf("Employee Joining date[ Day Month Year ]:");
        scanf("%i %i %i", &info[i].date.day,&info[i].date.month ,&info[i].date.year);
    }
    for(int i = 0; i < 10; i++)
    {
        if(info[i].salary>=10000)
        {
        printf("Employee Code: %i\n",info[i].code);
        printf("Employee Name: %s\n", info[i].name);
        printf("Employee Salary: %i\n", info[i].salary);
        printf("Employee Dept. No.: %i\n",info[i].dept_no);
        printf("Employee Joining date[ Day Month Year ]: %i %i %i\n",info[i].date.day,info[i].date.month ,info[i].date.year);
        }
    }
    return 0;
}
