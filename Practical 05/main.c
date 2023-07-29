#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*01
    int x=0;

     while(x<=100)
     {
         printf("%d ",x);

         x++;
     }


  int x=0;

  do
     {
         printf("%d ",x);

         x++;
     } while(x<=100);


    int x;

     for(x=0;x<=100,x++)
     {
         printf("%d ",x);
     }*/

     /*02
     int marks[10];
    int i, total = 0;
    float average;

    // Input marks
    printf("Enter 10 marks:\n");
    for (i = 0; i < 10; i++) {
        printf("Mark %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    average = (float)total / 10;

    // Print total and average
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    // Check pass or fail
    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;*/

    /*03
    int no;
     int i=1,factorial=1;

     printf("Enter number -");
     scanf("%d",&no);

     while(i<=no){
        factorial*=1;
        i++;
     }
     printf("Factorial is %d");*/

     /*04
     int no;
     int sum=0;

     printf("Enter no - ");
     scanf("%d",&no);

     while(no>0){
        sum+=no%10;
        no/=10;
     }

     printf("Sum of numbers %d \n",sum);*/
}
