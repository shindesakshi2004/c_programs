#include<stdio.h>

void main()
{
    int a;
    int b;
    int c;
    int d;

    printf("a language marks");
    scanf("%d",&a);

    printf("b language Marks");
    scanf("%d",&b);

    printf("c language Marks");
    scanf("%d",&c);

    printf("d lamguage Marks");
    scanf("%d",&d);


    int subjectTotalMarks ;
    printf("subjectTotalMarks ");
    scanf("%d",&subjectTotalMarks);

    int totalMarks = a+b+c+d;//80+80+80+80



    printf("totalMarks language=%d \n",totalMarks);

int parcentage = totalMarks*100/subjectTotalMarks;//320/400*100 =80%
    printf("parcentage in laguage=%d \n",parcentage);



    if(parcentage>80)
    {
        printf("grad in language A+");
    }

    else if(parcentage>70)
    {
        printf("grad in language A");
    }
    else if(parcentage>60)
    {
            printf("grad in language B");
    }
    else if(parcentage>50)
    {
        printf("grad in language c");
    }

    else if(parcentage>40)
    {
        printf("grad in language d");
    }
    else
    {
        printf("sorry you are failed in language");
    }
}
