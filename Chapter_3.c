#include <stdio.h>
int main()
{
    /*C Programming Practice Chapter 3
      Topics covered : Conditional statements and Case control instructions.*/

    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there are
    three subjects and take the marks as input from the user */
    printf("-------------- TASK 1 --------------\n");
    printf("welcome!! Enter your marks out of 100\n");
    int a, b, c;
    printf("enter english marks : ");
    scanf("%d", &a);
    printf("enter hindi marks : ");
    scanf("%d", &b);
    printf("enter mathematics marks : ");
    scanf("%d", &c);
    if ((a + b + c) / 3 >= 40 && a >= 33 && b >= 33 && c >= 33)
    {
        printf("Congrats ! you're pass.\n");
    }
    else
    {
        printf("You're fail.\n");
    }

    /*Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab Tax
    2.5 - 5.0L 5%
    5.0L - 10.0L 20%
    Above 10.0L 30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user. */
    printf("-------------- TASK 2 --------------\n");
    int n;
    printf("enter your salary : ");
    scanf("%d", &n);
    if (n <= 250000)
    {
        printf("No need to pay tax.\n");
    }
    else if (n > 250000 && n <= 500000)
    {
        float t = n * 0.05;
        printf("You need to pay %.2f as income tax.\n", t);
    }
    else if (n > 500000 && n <= 1000000)
    {
        float t = n * 0.20;
        printf("You need to pay %.2f as income tax.\n", t);
    }
    else if (n > 1000000)
    {
        float t = n * 0.30;
        printf("You need to pay %.2f as income tax.\n", t);
    }

    /*Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user. */
    printf("-------------- TASK 3 - LEAP YEAR OR NOT--------------\n");
    int year;
    printf("enter year : ");
    scanf("%d", &year);
    if (n % 400 == 0)
    {
        printf("its a leap yaer.\n");
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        printf("its a leap yaer.\n");
    }
    else
    {
        printf("its not a leap yaer.\n");
    }

    /*Write a program to determine whether a character entered by the user is lowercase or not. */
    printf("-------------- TASK 4 - UPPERCASE OR LOWERCASE--------------\n");
    char ch;
    printf("enter character : ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("its lowercase.\n");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("its uppercase.\n");
    }
    else
    {
        printf("its special character.\n");
    }

    /*Write a program to find greatest of four numbers entered by the user. */
    printf("-------------- TASK 5 - TO FIND GREATEST NUMBER--------------\n");
    int fnum, snum, tnum;
    printf("enter first number : ");
    scanf("%d", &fnum);
    printf("enter second number : ");
    scanf("%d", &snum);
    printf("enter third number : ");
    scanf("%d", &tnum);
    int great = fnum;
    if (great < snum)
    {
        great = snum;
    }
    if (great < tnum)
    {
        great = tnum;
    }
    printf("greatest number is %d", great);
    return 0;
}