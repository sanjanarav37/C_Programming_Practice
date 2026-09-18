#include <stdio.h>
int main()
{

    /*C Programming Practice Chapter 3
    Topics covered : For, While and Do while Loops.*/

    // TASK 1 - TO PRINT TABLE OF ANY NUMBER
    printf("----------- TASK 1 - TABLE -----------\n");
    int n;
    printf("enter number for table : ");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // TASK 2 - TO PRINT REVERSE TABLE OF ANY NUMBER
    printf("----------- TASK 2 - REVERSE TABLE -----------\n");
    int t;
    printf("enter number for reverse table : ");
    scanf("%d", &t);
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n", t, i, t * i);
    }

    // TASK 3 - SUM OF FIRST N NATURAL NUMBER USING FOR LOOP
    printf("----------- TASK 3 - SUM OF FIRST NATURAL NUMBERS -----------\n");
    int sum = 0;
    int N;
    printf("enter number of natural number needed : ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("sum of first %d natural number is %d\n", N, sum);

    // TASK 3 - SUM OF FIRST N NATURAL NUMBER USING WHILE LOOP
    printf("----------- TASK 4 - SUM OF FIRST NATURAL NUMBERS USING WHILE LOOP -----------\n");
    int summ = 0;
    int k;
    printf("enter number of natural number needed : ");
    scanf("%d", &k);
    int j = 0;
    while (j <= k)
    {
        summ += j;
        j++;
    }
    printf("sum of first %d natural number is %d\n", k, summ);

    // TASK 5 - SUM OF FIRST N NATURAL NUMBER USING DO-WHILE LOOP
    printf("----------- TASK 5 - SUM OF FIRST NATURAL NUMBERS USING DO WHILE LOOP-----------\n");
    int summm = 0;
    int l;
    printf("enter number of natural number needed : ");
    scanf("%d", &l);
    int m = 0;
    do
    {
        summm += m;
        m++;
    } while (m <= l);
    printf("sum of first %d natural number is %d\n", l, summm);

    // SUM OF MULTIPLE OF ANY TABLE
    printf("------------- TASK 6 - SUM OF MULTIPLICATION --------------\n");
    int na;
    printf("enter number for table : ");
    scanf("%d", &na);
    int total = 0;
    for (int i = 1; i < 11; i++)
    {
        total = total + i * na;
    }
    printf("the total is : %d\n", total);

    // TO FIND ANY FACTORIAL
    printf("----------- TASK 7 - FACTORIAL --------------\n");
    int no;
    printf("enter number for table : ");
    scanf("%d", &no);
    int fact = 1;
    if (no < 0)
    {
        printf("number should be equal to or greater than 0\n");
    }
    else
    {
        for (int i = 1; i <= no; i++)
        {
            fact = fact * i;
        }
        printf("factorial is : %d\n", fact);
    }

    // TO FIND FACTORIAL OF ANY NUMBER USING WHILE LOOP
    printf("----------- TASK 8 - FACTORIAL USING WHILE -----------\n");
    int num;
    int factt = 1;
    printf("enter number :  ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("number should be equal to or greater than 0\n");
    }
    else
    {
        int i = 1;
        while (i <= num)
        {
            factt = factt * i;
            i++;
        }
        printf("factorial is : %d\n", factt);
    }
    // TO CHECK WETHER A NUMBER IS PRIME OR NOT
    printf("----------- TASK 9 - TO CHECK PRIME NUMBER OR NOT -----------\n");
    int e;
    printf("enter number : ");
    scanf("%d", &e);
    int f = 0;
    for (int i = 2; i < e; i++)
    {
        if (e % i == 0)
        {
            f += 1;
        }
    }
    if (f == 0)
    {
        printf("its prime");
    }
    else
    {
        printf("its not prime");
    }

    return 0;
}