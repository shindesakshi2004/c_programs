#include<stdio.h>

void main(){


int mark;
printf("Enter the language mark");
scanf("%d",&mark);

if(mark>80)
{
    printf("congratulations your grad is A+");
}

 else if(mark>70)
{
    printf("your grad is A");
}
 else if(mark>60)
{
    printf("your grad is B");
}

 else if(mark>50)
{
    printf("your grad is is c");
}
else if(mark>40){

    printf("your grad is d");
}
else
{
    printf("Sorry you are failed");
}

}

