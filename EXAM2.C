#include<stdio.h>
#include<conio.h>

main()
{
 int score;
 char grade;
 clrscr();

 printf("your score is = ");
 scanf("%d", &score);

 if (score>100 || score<0)
  {  printf("invalid score");
  }
 else
  {

  (score>=90 && score<=100)
    ? grade ='A'
    :(score>=80 && score<90)
      ? grade = 'B'
      : (score>=70 && score<80)
	? grade = 'C'
	: (score>=60 && score<70)
	  ? grade = 'D'
	  : (score<60 && score>=0)
	    ? grade = 'F'
	    :printf("invalid number");

   printf("your grade is = %c\n", grade);

   switch (grade)
    {
      case 'A' : printf("excellent work\n"); break;
      case 'B' : printf("well done\n"); break;
      case 'C' : printf("good job\n"); break;
      case 'D' : printf("you pass but do better\n"); break;
      default  : printf("you are failed\n"); break;
    }
   if(grade=='A')
    { printf("congrats, you passed");
    }
    else if(grade=='B')
    { printf("congrats, you passed");
    }
    else if(grade=='C')
    { printf("congrats, you passed");
    }
    else if(grade=='D')
    { printf("congrats, you passed");
    }
    else
    {
     printf("you failed");
    }
   }
  getch();
}