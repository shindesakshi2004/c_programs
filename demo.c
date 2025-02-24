#include<stdio.h>

void main()
{
    char fname[55];
    char lname[55];
    char collage[55];
    char gender[55];
    char email[555];
    char mobaile[555];
     int a;
     int b;
     int c;
     int d;
    printf("Enter the fname");
    scanf("%s",&fname);

    printf("Enater the lname");
    scanf("%s",&lname);

    printf("Enater the collage");
    scanf("%s",&collage);

    printf("Enater the gender");
    scanf("%s",&gender);

    printf("Enater the email");
    scanf("%s",&email);

    printf("Enater the mobaile");
    scanf("%s",&mobaile);


      printf("your fname is =%s\n",fname);
      printf("your lname is =%s\n",lname);
      printf("your collage is =%s\n",collage);
      printf("your gender is =%s\n",gender);
      printf("your email is =%s\n",email);
      printf("your mobaile is =%s\n",mobaile);

          printf("Enater the language a");
          scanf("%d",&a);
           printf("Enater the language b");
          scanf("%d",&b);
           printf("Enater the language c");
          scanf("%d",&c);
           printf("Enater the language d");
          scanf("%d",&c);

          int subjectTotalMarks;
            printf("Enater the subjectTotalMarks");
          scanf("%d",&c);
           printf("subjectTotalMarks =%d\n",subjectTotalMarks);


           int totalMarks = a+b+c+d;
           printf("totalMarks =%d\n",totalMarks);

          int parcentage = totalMarks*100/subjectTotalMarks;
          printf("Enter the parcentage language =%d\n", parcentage);


          if(parcentage>80)
          {
              printf("congractulation your grad id A+");
          }

          if(parcentage>70)
          {
              printf(" your grad id a");
          }
          if(parcentage>60)
          {
              printf(" your grad id b");
          }
          if(parcentage>50)
          {
              printf("your grad id c");
          }
          if(parcentage>40)
          {
              printf("your grad id d");
          }
         else
          {
              printf("sorry you are faile");
          }





















}
