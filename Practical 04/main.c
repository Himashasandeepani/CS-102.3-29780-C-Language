#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    /*01
    int no;

    printf("Enter the number - ");
    scanf("%d",&no);

    if(no%2==0){
        printf("%d is even number \n",no);
    }else{
    printf("%d is odd number \n",no);}

    return 0;

    #include<stdio.h>
int main()
{
   int no;

    printf("Enter the number - ");
    scanf("%d",&no);

    switch(no%2)
    {
        case 0:printf("%d is even number \n",no);break;
        case 1:printf("%d is odd number \n",no);break;
    }
    return 0;*/

    /*02
    int choice;
    float n1,n2;

    printf("Menu driven calculator \n");

    printf("Enter the first number - ");
    scanf("%f",&n1);
    printf("Enter the second number - ");
    scanf("%f",&n2);

    printf("Select an operation - \n");
    printf("1. Addition(+) \n");
    printf("2. Substraction(-) \n");
    printf("3. Multipication(*) \n");
    printf("4. Divition(%) \n");

    printf("Enter your chice(1-4) - ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:printf("Result - %.2f \n",n1+n2);
        case 2:printf("Result - %.2f \n",n1-n2);
        case 3:printf("Result - %.2f \n",n1*n2);
        case 4:
            if(n2!=0){
                printf("Result - %.2f \n",n1/n2);
                }else{
                printf("Error: Division by zero is not allowed \n");}break;

    default:printf("Invalid choice \n");
    }

    return 0;*/

    /*03
       int choice;
    float r,d,c,a;

    printf("Menu driven Calculator \n");

    printf("Enter the radius of the circle");
    scanf("%f",&r);

    printf("Selection a calculation \n");
    printf("1. calculate diameter \n");
    printf("2. calculate circumference \n");
    printf("3. calculate area \n");

    printf("Enter your choice(1-3) - ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:printf("Result - %.2f \n",2*r);break;
        case 2:printf("Result - %.2f \n",2*PI*r);break;
        case 3:printf("Result - %.2f \n",PI*r*r);break;

        default:printf("Invalid choice \n");
    }
    return 0;*/

    /*04
       char c;

    printf("Enter a character - ");
    scanf("%d",&c);

    switch(c)
    {
        case 'a':printf("Vowel \n",c);break;
        case 'e':printf("Vowel \n",c);break;
        case 'i':printf("Vowel \n",c);break;
        case 'o':printf("Vowel \n",c);break;
        case 'u':printf("Vowel \n",c);break;

        default:printf("This is not vowel \n",c);
    }
    return 0;*/

    /*05
       int no,year;

     printf("Enter a month number - ");
     scanf("%d",&no);
     printf("Enter the year - ");
     scanf("%d",&year);

     switch(no)
     {
       case 1:printf("31 days in January \n",no);break;
       case 2:
        if(year%4==0)
            printf("29 days in February \n",no);
            else
                printf("28 days in February \n",no);break;

                case 3:printf("31 days in March \n",no);break;
                case 4:printf("30 days in April \n",no);break;
                case 5:printf("31 days in May \n",no);break;
                case 6:printf("30 days in June \n",no);break;
                case 7:printf("31 days in July \n",no);break;
                case 8:printf("31 days in Augest \n",no);break;
                case 9:printf("30 days in September \n",no);break;
                case 10:printf("31 days in Octomber \n",no);break;
                case 11:printf("30 days in November \n",no);break;
                case 12:printf("31 days in December \n",no);break;

                default:printf("Invalid month number \n");
     }
     return 0;*/

}
