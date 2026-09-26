#include <stdio.h>
/*C Programming Practice Chapter 6
    Topics covered : Poiners, Call by value and Pointer airthematic.*/

int *pass(int);
int change(int *);
void swap(int *, int *);
void sumavg(int, int, int *, int *);
int change2(int);

int *pass(int b)
{
  int *ptr = &b;
  return ptr;
}

int change(int *c)
{
  *c = *c * 10;
  return *c;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void sumavg(int a, int b, int *sum, int *avg)
{
  *sum = a + b;
  *avg = (a + b) / 2;
}

int change2(int a)
{
  return a * 10;
}

int main()
{

  /*Write a program to print the address of a variable. Use this address to get the value of the variable.*/
  printf("------------- TASK 1 -------------\n");
  int a = 2;
  int *p = &a;
  printf("value of a using pointer is : %d\n", *p);

  /*Write a program having a variable i . Print the address of i . Pass this variable to a function and print its address. Are these addresses the same? Why?*/
  printf("------------- TASK 2 -------------\n");
  int b = 3;
  int *pt = &b;
  printf("In main funcion the address of b is : %u\n", pt);
  printf("In funcion the address b is : %u\n", pass(b));

  /*Write a program to change the value of a variable to ten times its current value*/
  printf("------------- TASK 3 -------------\n");
  int n;
  printf("enter a number : ");
  scanf("%d", &n);
  change(&n);
  printf("now the value of number is %d\n", n);

  /*Write a program to swap two numbers using call by reference.*/
  printf("------------- TASK 4 -------------\n");
  int f;
  printf("enter first number : ");
  scanf("%d", &f);
  int s;
  printf("enter second number : ");
  scanf("%d", &s);
  swap(&f, &s);
  printf("After swapping first number is %d and second number is %d\n", f, s);

  /*Write a program using a function which calculates the sum and average of two
  numbers. Use pointers and print the values of sum and average in main()*/
  printf("------------- TASK 5 -------------\n");
  int n1, n2;
  printf("enter two numbers : ");
  scanf("%d %d", &n1, &n2);
  int sum, avg;
  sumavg(n1, n2, &sum, &avg);
  printf("sum : %d\t average : %d\n", sum, avg);

  /*Write a program to print the value of a variable i by using a pointer to pointer
  type variable.*/
  printf("------------- TASK 6 -------------\n");
  int value = 10;
  int *ptrr = &value;
  int **ptrrr = &ptrr;
  printf("value is : %d\n", **ptrrr);

  /*Write a program to print the value of a variable i by using a pointer to pointer
  type variable.*/
  printf("------------- TASK 7 -------------\n");
  int num;
  printf("enter : ");
  scanf("%d", &num);
  change2(num);
  printf("even after function call number is still %d\n", num);

  return 0;
}
