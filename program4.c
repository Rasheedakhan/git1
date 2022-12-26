#include<stdio.h>
int main()
{
    float b_salary,g_salary;
    printf("enter the basic salary of the employee:");
    scanf("%f",&b_salary);
    if(b_salary<=4000)
    {
        g_salary=b_salary+0.1*b_salary;
        g_salary=b_salary+0.5*b_salary;
        printf("gross salary=%.2f",g_salary);
    }
    else if(b_salary>4001 && b_salary<=8000)
    {
        g_salary=b_salary+0.2*b_salary;
        g_salary=b_salary+0.6*b_salary;
        printf("gross salary=%.2f",g_salary);
    }

    else if(b_salary>8001 && b_salary<12000)
    {
        g_salary=b_salary+0.25*b_salary;
        g_salary=b_salary+0.7*b_salary;
        printf("gross salary=%.2f",g_salary);
    }
    else if(b_salary>=12000)
    {
        g_salary=b_salary+0.3*b_salary;
        g_salary=b_salary+0.8*b_salary;
        printf("gross salary=%.2f",g_salary);
    }
}
