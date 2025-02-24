#include<stdio.h>
void main(){
int age;
int mark;
int num;

printf("Enter your age");
scanf("%d",&age);


if(18<=age)

    printf("you are eligibale for voting\n");

else {
    printf("you are not eligibale for voting\n");

}

printf("Enter your mark");
scanf("%d",&mark);

if(mark>=35)
{

    printf("you are pass\n");

}
else{

    printf("sorry you are fail\n");
}


printf("Enter your num");
scanf("%d",&num);

if(num%2==0)
{

    printf(" your value is even");

}

else{

    printf("your value is odd");
}

}
