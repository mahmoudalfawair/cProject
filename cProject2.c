#include <stdio.h>
int main(int argc , char** argy)
{
printf("Enter your grade in every material study \n");
float math ;
float arabic;
float english;
float physics;
float religion;
float sport;
float computer;

float sum;
float average;

printf("enter the math's grade ");
scanf("%f " , &math);

printf("enter the arabic's grade ");
scanf("%f" , &arabic);

printf("enter the english's grade ");
scanf("%f" , &english);

printf("enter the physics's grade ");
scanf("%f" , &physics);

printf("enter the deen's grade ");
scanf("%f" , &religion);

printf("enter the bio's grade ");
scanf("%f" , &sport);

printf("enter the computer's grade ");
scanf("%f" , &computer);
 

sum = math + arabic + english + physics + deen + bio + computer ;
average = sum / 7;
printf("your average is %f" , average);


return 0;
}
