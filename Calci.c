#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define note "Enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    printf("\t\t Scientific Calculator\n\n");
    int choice;
    printf("\n Press 0 to quit \n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8 for square \n");
    printf("Enter 9 for cube \n");
    printf("Enter 10 for squareroot\n\n");

    while (1)
    {
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 0:
            exit(0);
        default:
            printf("\n %s \n", note);
        }
    }
    return 0;
}

void addition()
{
    int a,b ;
    printf("Enter First number :");
    scanf("%d", &a);
    printf ("Enter Second number:");
    scanf("%d", &b);
    printf("The Addition is : %d\n", a + b);
}
void subtraction()
{
    int a,b ;
    printf("Enter First number :");
    scanf("%d", &a);
    printf ("Enter Second number:");
    scanf("%d", &b);
    printf("The Subtraction  is : %d\n", a - b);
}
void multiplication()
{
    int a,b ;
    printf("Enter First number :");
    scanf("%d", &a);
    printf ("Enter Second number:");
    scanf("%d", &b);
    printf("The Multiplication  is : %d\n", a * b);
}
void division()
{
    float a,b ;
    printf("Enter First number :");
    scanf("%f", &a);
    printf ("Enter Second number:");
    scanf("%f", &b);
    printf("The Division is : %d\n", a / b);
}
void modulus()
{
    int a,b ;
    printf("Enter First number :");
    scanf("%d", &a);
    printf ("Enter Second number:");
    scanf("%d", &b);
    printf("The Modulus is : %d\n", a % b);
}
void factorial()
{
    int n, factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d", n, factorial);
}
void power()
{
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf", &b, &p);
    double e = pow(b, p);
    printf("The power is %lf", e);
}
void square()
{
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf", &b);
    double p = pow(b, 2);
    printf("The square of %lf is %lf", b, p);
}
void cube()
{
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf", &b);
    double p = pow(b, 3);
    printf("The cube of %lf is %lf", b, p);
}
void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf", &b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf", b, s);
}
