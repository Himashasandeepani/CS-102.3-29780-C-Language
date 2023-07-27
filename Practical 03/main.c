#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*01
   int n1,n2,max;

   printf("Enter two numbers -");
   scanf("%d %d",&n1,&n2);

   if(n1>n2)
   max=n1;
   else
    max=n2;

   printf("Highest number is %d \n",max);*/

    /*02
    int a,b,c,max,min;

   printf("Enter three numbers -");
   scanf("%d %d %d",&a,&b,&c);

   max=a;
   if(b>max)
    max=b;
   if(c>max)
    max=c;

   min=a;
   if(b<min)
   min=b;
   if(c<min)
    min=c;

   printf("The largest number is %d \n",max);
   printf("The smallest number is %d \n",min);*/

   /*03
   char empn[20];
   float bsalary,nsalary,dc;

   printf("Enter a employee name -");
   scanf("%s",&empn);

   printf("Enter basic salary -");
   scanf("%f",&bsalary);

   if(bsalary<5000){
   dc=(0.05*bsalary);
   nsalary=(bsalary+dc);
   }else if(bsalary>=5000 && bsalary<10000){
   dc=(0.1*bsalary);
   nsalary=(bsalary+dc);
   }else{
    dc=(0.15*bsalary);
    nsalary=(bsalary+dc);        dc=increment
   }

   printf("Employee name is %s \n",empn);
   printf("New salary is %.2f \n",nsalary);*/

   /*04
   float r,d,c,a;
   float pi=M_PI;

   printf("Enter the radium of a circle -");
   scanf("%f",r);

   d=r+r;
   c=(2*M_PI*r);
   a=(M_PI*r*r);

   printf("Diameter of a circle is %.5f \n",d);
   printf("Circumference of a circle is %.5f \n",c);
   printf("area of a circle is %.5f \n",a);*/

   /*05
     int n1,n2;

  printf("Enter first number -");
  scanf("%d",n1);
  printf("Enter second number -");
  scanf("%d",n2);
  if(n2!=0 && n1%n2==0)
   printf("n1 is a multiple of n2 \n",n1,n2);
  else
    printf("n1 is not a multiple of n2 \n",n1,n2);*/

    /*06
      char character[] = {'0','1','2','A','B','C','a','b','c','$','*','+','/'};
   int num_character = sizeof(characters)/sizeof(char);

   printf("Character\Integer equivalent");
   printf("Uppercase letters A,B,C ");
   scanf("%d %d %d \n",'A','B','C');
   printf("Lowercase letters a,b,c");
   scanf("%d %d %d \n",'a,'b','c');
   printf("Digits 1,2");
   scanf("%d %d %d \n",'1','2');
   printf("Special symbols $,*,+,/");
   scanf("%d %d %d \n",'$','*','+','/');
   printf("Blank character ");
   scanf("%d \n",'');

   return 0;*/

   /*07
   int basicSalary,yearsOfService,monthlySales,additionalAllowance = 0,bonusPercentage = 0,
    bonus = 0,grossRemuneration = 0;

    char city;

    // Input basic salary, years of service, city, and monthly sales
    printf("Enter the basic salary: ");
    scanf("%d", &basicSalary);

    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the city (C for Colombo): ");
    scanf(" %c", &city);

    printf("Enter the monthly sales: ");
    scanf("%d", &monthlySales);

    // Calculate additional allowance based on years of service
    if (yearsOfService > 0) {
        additionalAllowance = 0.1 * basicSalary;
    }

    // Calculate additional allowance based on city
    if (city == 'C') {
        additionalAllowance += 2500;
    }

    // Calculate bonus percentage based on monthly sales
    if (monthlySales >= 0 && monthlySales <= 25000) {
        bonusPercentage = 10;
    } else if (monthlySales > 25000 && monthlySales <= 50000) {
        bonusPercentage = 12;
    } else if (monthlySales > 50000) {
        bonusPercentage = 0;
    }

    // Calculate bonus amount
    bonus = (bonusPercentage / 100.0) * monthlySales;

    // Calculate gross remuneration
    grossRemuneration = basicSalary + additionalAllowance + bonus;

    // Output the gross monthly remuneration
    printf("Gross monthly remuneration: %d\n", grossRemuneration);

    return 0;*/

}
