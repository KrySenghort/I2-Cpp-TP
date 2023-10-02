#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    char C;
    char r;
    int q;
   printf("1.[M]eat!!\n");
   printf("2.[V]egetable!!\n");
   printf("3.[F]rozen food!!\n");
   printf("4.[E]quipment !!\n");
   printf("5.[S]ea food!!\n");
   printf("6.[C]anning food!!\n");
   printf("7.[B]everages!!\n");
   printf("8.[A]lcohol!!\n");
   printf("9.[f]ast food!!\n");
   printf("10.[C]lothing!!\n");
   printf("Enter Your choice as 1,2,3,4,5,6,7,8,9,10,\n\t\t\tM,V,F,E,S,C,B,A,f,C:");
   scanf("%c",&c);
   switch(c)
   {
       case '1':
       case'M':
           printf("\nYour choice is Meat!!\n");
           printf("What are meats do you want to buy?\n");
           printf("a.[B]eef!!\n");
           printf("b.[C]hicken!!\n");
           printf("c.[F]ish!!\n");
           printf("d.[D]uck!!\n");
           printf("e.[A]ustralia beef!!\n");
           printf("Please choice meat:");
           scanf("%s",&C);
           switch(C)
           {
               case 'B':
               case 'a':
                   printf("\nYou order is beef!!");
                   printf("Its price is 10$ per kilogram!");
                   printf("\nEnter your quantity:");
                   scanf("%d",&q);
                   float sum1=q*10.0;
                   printf("\nTotal : %.1f $",sum1);
                   break;
               case 'C':
               case 'b':
                   printf("Your choice is Chicken!!\n");
                   printf("Its price is 7.5$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum2=q*7.5;
                   printf("\nTotal : %.1f $",sum2);
                   break;
               case 'F':
               case 'c':
                   printf("Your choice is Fish!!\n");
                   printf("Its price is 5$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum3=q*5.0;
                   printf("\n Total : %.1f $",sum3);
                   break;
               case 'd':
               case 'D':
                   printf("Your choice is Duck!!\n");
                   printf("Its price is 5.5$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum4=q*5.5;
                   printf("\n Total : %.1f $",sum4);
                   break;
               case 'A':
               case 'e':
                   printf("Your choice is Australia Beef!!\n");
                   printf("Its price is 25$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum5=q*25.0;
                   printf("\n Total : %.1f $",sum5);
                   break;
           }
       case 'V':
       case '2':
           printf("Your choice is Vegetable!!\n");
           printf("What are vegetable do you want to buy?\n");
           printf("a.[C]ucumber!!\n");
           printf("b.[B]roccoli!!\n");
           printf("c.[S]alad!!\n");
           printf("d.[l]emon!!\n");
           printf("Please choice a,b,c,d,e,C,B,S,L:");
           scanf("%c",&r);
           switch(r)
           {
               case 'a':
               case 'C':
                   printf("Your choice is Cucumber!!\n");
                   printf("Its price is 2.5$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum6=q*2.5;
                   printf("\n Total : %.1f $",sum6);
                   break;
               case 'b':
               case 'B':
                   printf("Your choice is Broccoli!!\n");
                   printf("Its price is 2$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum7=q*2;
                   printf("\n Total : %.1f $",sum7);
                   break;
               case 'c':
               case 'S':
                   printf("Your choice is Salad!!\n");
                   printf("Its price is 1.5$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum8=q*1.5;
                   printf("\n Total : %.1f $",sum8);
                   break;
               case 'd':
               case 'L':
                   printf("Your choice is Lemon!!\n");
                   printf("Its price is 1$ per kilogram!!\n");
                   printf("Enter your quantity:");
                   scanf("%d",&q);
                   float sum9=q*1.0;
                   printf("\n Total : %.1f $",sum9);
                   break;
           }
   }
}