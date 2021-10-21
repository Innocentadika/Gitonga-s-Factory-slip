/*
  project: payslip program
  Author: Innocent Mukovwa
  Date: Oct, 2021
  Compiler: GCC
  Language: C99
  License: MIT

  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration
    char name[100];
    int emp_no,hours;
    int normal_pay,overtime_pay, gross;
    float tax,net;
    const int rate =1000;

    printf("Gitonga's Factory Payslip system!\n");
    printf("Employee Name: ");
    gets(name);
    printf("Employee number: ");
    scanf("%d",&emp_no);
    printf("Hours Worked: ");
    scanf("%d",&hours);

    //computation
    if(hours>40) {
        normal_pay =40*rate;
        overtime_pay =(hours -40)*1.5*rate;
    }

    gross = normal_pay + overtime_pay;
    tax = 0.16 * gross;
    net = gross- tax;
    //print payslip
    printf("Emp No:\t%d\n",emp_no);
    printf("Normal pay: \t%d\n",normal_pay);
    printf("Overtime pay: \t%d\n",overtime_pay);
    printf("Gross pay: \t%d\n",gross);
    printf("Tax: \t%d\n",tax);
    printf("Net pay: \t%d\n,net");


    return 0;
}


