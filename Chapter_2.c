#include <stdio.h>

int main()
{

    /*C Programming Practice Chapter 2
     Topics covered : Modulas, Operator Precedance and Operator Associativity*/

    // TASK 1 - PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 97 OR NOT
    printf("------------- TASK 1 - MODULAS -------------\n");
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (n % 97 == 0)
    {
        printf("Yes! %d is divisible by 97", n);
    }
    else
    {
        printf("No! %d is not divisible by 97", n);
    }

    return 0;
}