#include<stdio.h>

void main(){
int coachNo =0;
int seatNo =0;

printf("enter your coachNo");
scanf("%d",&coachNo);

printf("enter your seatNo");
scanf("%d",&seatNo);

switch(coachNo)
{
case 1:

printf("1");


break;

case 2:

    printf("2");


break;

case 3:
    printf("3");

break;

case 4:

    printf("4");


break;

case 5:
    printf("5");
   break;
default :

    printf("incorrect coachNo\n");
}

    if(seatNo<60){

    printf("seat are reserved");
}
else{

    printf(" incorrect seatNO");
}

}








