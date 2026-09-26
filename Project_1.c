#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int a = rand() % 100;
    printf("%d\n", a);
    int count = 3;
    printf("WELCOME!! ITS A NUMBER GUSSING GAME\n") ;
    printf("Rules : YOU HAVE ONLY 3 TURNS TOO  GUESS THE CORRECT NUMBER & YOU CAN GUESS NUMBER BETWEEN 1 TO 100.\n");
    for (int i = 0; i < 3; i++)
    {
        int n;
        printf("enter number : ");
        scanf("%d", &n);
        count = count-1;
        if (n == a)
        {
            printf("Great !! you gussed right.\n");
            break;
        }
        if (n > a)
        {
            printf("Oops !! you guessed higher.\n");
            printf("gusse again !!!\n");
        }
        if (n < a)
        {
            printf("Oops !! you guessed lower.\n");
            printf("gusse again !!!\n");
        }
        printf("REMINDER : you have %d attemps left\n",count);
        
    }
    return 0;
}