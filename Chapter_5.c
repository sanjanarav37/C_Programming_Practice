#include <stdio.h>

/*C Programming Practice Chapter 5
Topics covered : INTRODUCTION TO FUNCTIONS.*/

// FUNCTIONS are a block of code that performs a specific task.

// HERE WE DECLARE ALL FUNCTTIONS :
int avg(int, int, int);
int temp(int);
float force(float, float, int);
void pattern(int);
int factorial(int);

// HERE WE DEFINE ALL FUNCTIONS MEANS WRITING PROGRAM TO PERFORM TASK.
int avg(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int temp(int a)
{
    return (a * 9 / 5) + 32;
}

float force(float m1, float m2, int r)
{
    float g = 9.8;
    return (g * m1 * m2) / (r * r);
}

void pattern(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

int factorial(int fact)
{
    if (fact == 0 || fact == 1)
    {
        return 1;
    }
    fact = fact * (factorial(fact - 1));
    return fact;
}

int main()
{ // HERE ARE FUNCION CALLS
  //  TASK 1 - FUNCTION CALL TO FIND AVERAGE THREE NUMBERS
    printf("-------- TASK 1 - FUNCTION TO FIND AVERAGE OF THREE NUMBERS -------\n");
    int x, y, z;
    printf("enter three numbers :");
    scanf("%d %d %d", &x, &y, &z);
    printf("The average of %d, %d and %d is %d\n", x, y, z, avg(x, y, z));

    // TASK 2 - FUNCTION CALL TO CONVERT CELSIUS TO FAHRENHEIT
    printf("---------- TASK 2 - FUNCTION TO CONVERT CELSIUS TO FAHRENHEI ---------\n");
    int c;
    printf("enter the temperature : ");
    scanf("%d", &c);
    printf("Fahremheit is : %d\n", temp(c));

    // TASK 3 - FUNCTION CALL TO CONVERT CELSIUS TO FAHRENHEIT
    printf("---------- TASK 3 - FUNCTION TO CALCULATE FORCE OF ATTRACTION ---------\n");
    float m1, m2;
    int r;
    printf("Enter masses of  two objects : ");
    scanf("%f %f", &m1, &m2);
    printf("enter radius : ");
    scanf("%d", &r);
    printf("Force of attraction is : %.2f\n", force(m1, m2, r));

    // TASK 4 - FUNCTION CALL TO PRINT A PATTERN
    printf("---------- TASK 4 - FUNCTION TO PRINT A PATTERN ---------\n");
    int n;
    printf("Enter number of lines :");
    scanf("%d", &n);
    pattern(n);
    printf("\n");

    // TASK 5 - FUNCTION CALL TO FIND FACTORIAL OF A NUMBER
    printf("---------- TASK 5 - FUNCTION TO FIND FACTORIAL USING RECURSSION ---------\n");
    int fact;
    printf("enter number - ");
    scanf("%d", &fact);
    printf("Factorial of %d is %d\n", fact, factorial(fact));

    return 0;
}
