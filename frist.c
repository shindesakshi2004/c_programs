#include<stdio.h>

void main(){
    int x;
    int y;
printf("Enter value of a");
scanf("%d",&x);
printf("Enter value of b");
scanf("%d",&y);

int d = x + y ;
printf("%d\n",d);


int f = x- y ;
printf("%d\n",f);

//multiplication
//float g = 50;
int i= x * y;

printf("%d\n",i);

//division
//float j = 10;
//float k = 30;
int m = (x/y);
printf("%d\n",m);
printf("%d,%d,%d,%d",d,f,i,m);

}

