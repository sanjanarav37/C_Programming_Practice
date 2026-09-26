#include<stdio.h>
  /*C Programming Practice Chapter 7
    Topics covered : Array and Pointer arithmatic.*/

    int main(){

/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.*/ 
  printf("------------- TASK 1 -------------\n");
int marks[10];
for(int i=0;i<10;i++){
    printf("enter %d value for array :",i);
    scanf("%d",&marks[i]);
}
int *p = &marks[0];
printf("element : %d\t",*(p+2));
printf("element : %d\t",*(p+5));
printf("element : %d\n",*(p+7));

 /* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
i. True.
ii. False.
iii. Depends.*/
 printf("------------- TASK 2 -------------\n");
int s[3] = {1,2,3};

 printf("%d\n",*(s+3));

/* Write a program to create an array of 10 integers and store multiplication table of any in it.*/
  printf("------------- TASK 3 -------------\n");
int num;
printf("enter number for table :");
scanf("%d",&num);
int table[10];
for(int i=1;i<=10;i++){
table[i-1] = i*num;
}
for (int i = 1; i <= 10; i++)
{printf("%d x %d = %d\n",num, i, table[i-1]);
}

/* Write a program containing a function which reverses the array passed to it.*/
 printf("------------- TASK 4 -------------\n");
int arr[5]={1,2,3,4,5};
for(int i=4;i>=0;i--)
{
  printf("%d\t",arr[i]);
}
printf("\n");
/*Write a program containing functions which counts the number of positive integers in
an array.*/
 printf("------------- TASK 5 -------------\n");
int number[5];
for(int i=0;i<5;i++)
{
  printf("Enter value :");
  scanf("%d",&number[i]);
}
int count = 0;
for (int i = 0; i < 5; i++)
{
  if (number[i]>0)
  {
    count++;
  }
  
}
printf("Total positive numbers are : %d\n",count);

/* Create an array of size 3 × 10 containing multiplication tables of the numbers input given by the user.*/
 printf("------------- TASK 6 -------------\n");
int input[3];
for (int i = 0; i < 3; i++)
{
  printf("enter number for table : ");
  scanf("%d",&input[i]);
}
int narr[3][10];
for(int i=0;i<3;i++){
  int new = input[i];
for(int j=0;j<10;j++){
narr[i][j] = new*(j+1);
}
}
for (int i = 0; i < 3; i++)
{
  for (int j = 0; j < 10; j++)
  {
    printf("%d\t",narr[i][j]);
  }
  printf("\n");
}

/*Create a three-dimensional array and print the addresses of its elements in increasing order.*/
 printf("------------- TASK 7 -------------\n");
int mtrx[3][3][3] = {1,2,3,4,5,6,7,8,9};
for (int i = 0; i < 3; i++)
{
  for (int j = 0; j< 3; j++)
  {
    for (int k = 0; k < 3; k++)
    {
      int *p = &mtrx[i][j][k];
      printf("address at position [%d][%d][%d] is %u\n",i,j,k,p);
    }
      }  

    }
    return 0;
  }