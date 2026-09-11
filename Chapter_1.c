#include <stdio.h>
int main()
{
    /*C Programming Practice Chapter 1
    Topics covered : Input/Output, Variables, Formate Specifiers, Arithematic Operators.*/

    // TASK 1 - PROGRAM TO CALCULATE AREA OF RECTANGLE
    // a - using hard coded inputs
    printf("---------- TASK 1 - AREA OF RACTANGLE ---------------\n");
    int width = 10;
    int length = 10;
    printf("Area of rectangle by hard coded input is %d\n", width * length);
    // b - by user inputs
    int Rlength;
    printf("enter length : ");
    scanf("%d", &Rlength);
    int Rwidth;
    printf("enter width : ");
    scanf("%d", &Rwidth);
    printf("Area of rectangle by user input is %d\n", Rwidth * Rlength);

    /*TASK 2 - PROGRAM TO FIND AREA OF CIRCLE AND VOLUME OF CYLINDER WITH SAME RADIUS*/
    printf("------------ TASK 2 - AREA OF CIRCLE & VOLUME OF CYLINDER -----------\n");
    // for circle
    int radius;
    printf("enter radius : ");
    scanf("%d", &radius);
    float pi = 3.14;
    float circleArea = pi * radius * radius;
    printf("Area of circle is : %.2f\n", circleArea);
    // for cylinder
    int height;
    printf("enter height for cylinder : ");
    scanf("%d", &height);
    float volume = circleArea * height;
    printf("Volume of cylinder is : %.2f\n", volume);

    // TASK 3 - TO CONVERT CELSIUS TO FAHREHEIT
    printf("------------ TASK 3 - CELSIUS TO FAHREHEIT -----------\n");
    float c;
    printf("enter celsius temperature : ");
    scanf("%f", &c);
    float f = (c * 9 / 5) + 32;
    printf("Fahrenheit is : %.2f\n", f);

    // PROGRAM TO FIND SIMPLE INTEREST
    printf("------------ TASK 3 - TO FIND SIMPLE INTREST -----------\n");
    float p;
    printf("enter principle : ");
    scanf("%f", &p);
    float r;
    printf("enter rate : ");
    scanf("%f", &r);
    float ti;
    printf("enter time : ");
    scanf("%f", &ti);
    float si = (p * r * ti) / 100;
    printf("Simple interest is : %.2f", si);

    return 0;
}
