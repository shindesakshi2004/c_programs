#include<stdio.h>
void main(){
int age;
int mark;

printf("Enter your age");
scanf("%d",&age);

if(age>=18){

    printf("are you eligibal for voting");
}
else{
int b = age - 18;
    printf(" sorry you are not eligibal for voting\n");

    printf("plz try agian %d",b );
}



}

