#include <stdio.h>
int main()
{
    char c; char C;  char r;  char a;  int q; char t; char y;char x;char z;char u;char v;
    printf("=========\tWelcome to Supermarket Management System\t========\n");
    printf("================= Welcome to our Menu ===================\n");
   printf("1.[M]eat!!\t 2.[V]egetable!!\t 3.[F]rozen food!!\t 4.[E]quipment !!\n 5.[S]ea food!!\t 6.[C]anning food!!\t 7.[B]everages!!\n 8.[A]lcohol!!\t 9.[f]ast food!!\n");
   printf("Enter Your choice as 1,2,3,4,5,6,7,8,9,10,\n\t\t\tM,V,F,E,S,C,B,A,f:");
   scanf("%c",&c);
   switch(c)
   {
       case '1':
       case'M':
           printf("\nYour choice is Meat!!\n");
           printf("What are meats do you want to buy?\n");
           printf("a.[B]eef!!\t b.[C]hicken!!\t c.[F]ish!!\n d.[D]uck!!\t e.[A]ustralia beef!!\n");
           printf("Please choice a,b,c,d,e,B,C,F,D,A:");
           scanf("%s",&C);
            if(C == 'a' || C == 'B')
           {
               printf("\nYour choice is Beef!!\n ");
               printf("\nIts price is 10$ per Kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum1=q*10.0;
               printf("\nTotal : %.1f$",sum1);
           }
           else if(C== 'b'|| C=='C')
           {
               printf("Your choice is Chicken!!");
               printf("\nIts price is 7.5$ per Kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum2=q*7.5;
               printf("\nTotal : %.1f $ ",sum2);
           }
           else if (C== 'c'|| C== 'F')
           {
               printf("\nYour choice is Fish!!\n ");
               printf("\nIts price is 5$ per Kilogram!!");
               
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum3= q*5.0;
               printf("\n Total :%.1f $",sum3);
           }
           else if (C == 'd' || C== 'D')
           {
               printf("\nYour choice is Duck!!");
               printf("\nIts price is 5.5$ per Kilogram!!");
               printf("\n Enter your quantity:");
               scanf("%d",&q);
               float sum4=q*5.5;
               printf("\nTotal : %.1f $",sum4);
           }
           else if (C == 'e' || C == 'A')
           {
               printf("\nYour choice is Australia Beef!!\n");
               printf("Its price is 25$ per kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum5=q*25.0;
               printf("\nTotal : %.1f $",sum5);
           }
           else
           {
               printf("\nInvalid choice!!\n");
           }
           break;
        
       case 'V':
       case '2':
           printf("Your choice is Vegetable!!\n");
           printf("What are vegetable do you want to buy?\n");
           printf("a.[C]ucumber!!\t b.[B]roccoli!!\t .[S]alad!!\n d.[L]emon!!\n ");
           printf("Please choice a,b,c,d,e,C,B,S,L:");
           scanf("%s",&r);
           
          if(r == 'a' || r == 'C')
           {
               printf("\nYour choice is Cucumber!!\n ");
               printf("\nIts price is 2$ per Kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum6=q*2.0;
               printf("\nTotal : %.1f$",sum6);
           }
           else if(r== 'b'|| r=='B')
           {
               printf("Your choice is Broccoli!!");
               printf("\nIts price is 3$ per Kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum7=q*3.0;
               printf("\nTotal : %.1f $ ",sum7);
           }
           else if (r== 'C'|| r== 'S')
           {
               printf("\nYour choice is Salad!!\n ");
               printf("\nIts price is 4$ per Kilogram!!");
               printf("\nEnter your quantity:");
               scanf("%d",&q);
               float sum8= q*4.0;
               printf("\n Total :%.1f $",sum8);
           }
           else if (r == 'L' || r== 'd')
           {
               printf("\nYour choice is Lemon!!");
               printf("\nIts price is 2$ per Kilogram!!");
               printf("\n Enter your quantity:");
               scanf("%d",&q);
               float sum9=q*2.0;
               printf("\nTotal : %.1f $",sum9);
           }
           else
           {
               printf("\nInvalid choice!!\n");
           }
           break;
        case '3':
        case 'F':
        	printf("\n Your choice is Frozen food!!\n");
        	printf("What is Frozen food do you want to buy?\n");
        	printf("a.[P]eas\t b.[C]hips\t c.[I]ce-cream\t d.[B]read\t e.[S]ausages\t f.[P]izza\t \n ");
        	printf("Enter your choice as a,b,c,d,e,f,P,C,I,B,S,P:");
        	scanf("%s",&a);
        	if(a=='a' || a == 'P')
        	{
        		printf("\nYour choice is Peas!!\n");
        		printf("\nIts price is 3$ per Kilogram!!\n");
        		printf("Enter your quantity:");
        		scanf("%d",&q);
        		float sum10=q*3.0;
        		printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum10);
			}
			else if(a=='b' || a=='C')
			{
				printf("\nYour choice is Chips!!\n");
				printf("Its price is 5$ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum11= q*5.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum11);
				
			}
			else if(a=='c' || a=='I')
			{
				printf("\nYour choice is Ice-cream!!\n");
				printf("Its price is 1$ per pack!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum12= q*1.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum12);
			}
			else if(a== 'd' || a== 'B')
			{
				printf("\nYour choice is Bread!!\n");
				printf("Its price is 1 $ per slide!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum13=q*1.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum13);
				
			}
			else if(a== 'e' || a== 'S')
			{
				printf("\nYour choice is Sausages!!\n");
				printf("Its price is 15 $ per Kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum14=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum14);
			}
				else if(a== 'f' || a== 'P')
			{
				printf("\nYour choice is Pizza!!\n");
				printf("Its price is 7 $ per box!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum15=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum15);
			}
			else{
				printf("\nInvalid Choice!!");
			}
			break;
			case '4':
			case 'E':
				printf("\nYour choice is Equipement!!\n");
				printf("\na.[H]ammer\t b.[D]rill\t c.[S]cissor\t d.[s]aw\t e.[M]allet\n ");
				printf("Enter your choice as a,b,c,d,e,H,D,S,s,M:");
				scanf("%s",&t);
				if(t== 'a' || t=='H')
				{
					printf("\nYour choice is Hammer!!\n");
				printf("Its price is 7 $!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum16=q*7.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum16);
				}
				else if(t=='b' || t== 'D')
				{
					printf("\nYour choice is Drill!!\n");
				printf("Its price is 10 $!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum17=q*10.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum17);
				}
				else if(t=='c' || t== 'S')
				{
					printf("\nYour choice is Scissor!!\n");
				printf("Its price is 5 $ per box!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum18=q*5.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum18);
				}
				else if(t== 'd' || t== 's')
				{
					printf("\nYour choice is saw!!\n");
				printf("Its price is 8 $ per box!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum19=q*8.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum19);
				}
				else if(t=='e' || t=='M')
				{
					printf("\nYour choice is Mallet!!\n");
				printf("Its price is 20 $!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum20=q*20.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum20);
				}
				else
				{
					printf("\nInvalid Choice!!");
				}
				break;
				case '5':
				case 'S':
					 printf("\nYour choice is Sea Food!!\n");
           printf("What are Sea Food do you want to buy?\n");
           printf("a.[O]ctopus!!\t b.[L]obster!!\t c.[C]rab!!\n d.[o]yster!!\t e.[S]nail!!\n");
           printf("\nEnter yout choice as ,a,b,c,d,e,O,L,C,o,S");
           scanf("%s",&y);
           if(y=='a' || y=='O')
           {
           	printf("\nYour choice is Octopus!!\n");
				printf("Its price is 25 $ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum21=q*25.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum21);
		   }
		   else if(y=='b' || y== 'L')
		   {
		   		printf("\nYour choice is Lobster!!\n");
				printf("Its price is 50 $ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum22=q*50.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum22);
		   }
		   else if(y== 'c' || y== 'C')
		   {
		   	printf("\nYour choice is Crab!!\n");
				printf("Its price is 18 $ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum23=q*18.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum23);
		   }
		   else if(y= 'd' || y== 'o')
		   {
		   	printf("\nYour choice is oyster!!\n");
				printf("Its price is 10 $ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum24=q*10.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum24);
		   }
		   else if(y=='e' || y=='S')
		   {
		   	printf("\nYour choice is Snail!!\n");
				printf("Its price is 23 $ per kilogram!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum25=q*23.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum25);
		   }
		   else{
		   	printf("\n Invalid Choice!!");
		   }
		   break;
		   case '6':
		   case 'C':
		   	printf("\nYour choice is Canning Food!!\n");
           printf("What are Canning Food do you want to buy?\n");
           printf("a.[B]roccoli!!\t b.[C]ucumber!!\t c.[F]ish Soup!!\n d.[L]obster!!\t e.[c]rab!!\n");
           printf("\nEnter your choice as a,b,c,d,e,B,C,F,L,c:");
           scanf("%s",&x);
           if(x=='a' || x=='B')
           {
           	printf("\nYour choice is Broccoli!!\n");
				printf("Its price is 5 $ per can!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum26=q*5.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum26);
		   }
		   else if(x=='b' || x== 'C')
		   {
		   		printf("\nYour choice is Cucumber!!\n");
				printf("Its price is 3 $ per Can!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum27=q*3.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum27);
		   }
		   else if(x== 'c' || x== 'F')
		   {
		   	printf("\nYour choice is Fish soup!!\n");
				printf("Its price is 2 $ per Can!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum28=q*2.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum28);
		   }
		   else if(x== 'd' || x== 'L')
		   {
		   	printf("\nYour choice is Lobster!!\n");
				printf("Its price is 70 $ per Can!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum29=q*70.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum29);
		   }
		   else if(x=='e' || x=='c')
		   {
		   	printf("\nYour choice is Crab!!\n");
				printf("Its price is 15 $ per Can!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum30=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum30);
		   }
		   else{
		   	printf("\n Invalid Choice!!");
		   }
		   break;
		   case '7':  //this is what i need to consider below
		   	case 'B':
		   		printf("\n Your choice is Beverage!!\n");
        	printf("What is Beverage do you want to buy?\n");
        	printf("a.[C]oca\t b.[M]ilk\t c.[P]epsi\t d.[S]ting\t e.[O]ishi\t f.[I]chitan\t \n ");
        	printf("Enter your choice as a,b,c,d,e,f,C,M,P,S,O,I:");
        	scanf("%s",&z);
        	if(z=='a' || z == 'C')
        	{
        		printf("\nYour choice is Coca!!\n");
        		printf("\nIts price is 12$ per bottle!!\n");
        		printf("Enter your quantity:");
        		scanf("%d",&q);
        		float sum31=q*12.0;
        		printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum31);
			}
			else if(z=='b' || z=='M')
			{
				printf("\nYour choice is Milk!!\n");
				printf("Its price is 15$ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum32= q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum32);
				
			}
			else if(z=='c' || z=='P')
			{
				printf("\nYour choice is Pepsi!!\n");
				printf("Its price is 13$ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum33= q*13.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum33);
			}
			else if(z== 'd' || z== 'S')
			{
				printf("\nYour choice is Sting!!\n");
				printf("Its price is 15 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum34=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum34);
				
			}
			else if(z== 'e' || z== 'O')
			{
				printf("\nYour choice is Oishi!!\n");
				printf("Its price is 17 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum35=q*17.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum35);
			}
				else if(z== 'f' || z== 'I')
			{
				printf("\nYour choice is Ichitan!!\n");
				printf("Its price is 18 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum36=q*18.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum36);
			}
			else{
				printf("\nInvalid Choice!!");
			}
			break;
			case '8':
			case 'A':
				printf("\n Your choice is Alcohol!!\n");
        	printf("What is Alcohol do you want to buy?\n");
        	printf("a.[C]ambodia beer\t b.[A]ngkor beer\t c.[T]iger beer\t d.[a]nchor beer\t e.[c]orona beer\t f.[G]ansbgerg beer\t \n ");
        	printf("Enter your choice as a,b,c,d,e,f,C,A,T,a,c,G:");
        	scanf("%s",&u);
        	if(u=='a' || u == 'C')
        	{
        		printf("\nYour choice is Cambodia beer!!\n");
        		printf("\nIts price is 12$ per bottle!!\n");
        		printf("Enter your quantity:");
        		scanf("%d",&q);
        		float sum37=q*12.0;
        		printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum37);
			}
			else if(u=='b' || u=='A')
			{
				printf("\nYour choice is Angkor beer!!\n");
				printf("Its price is 15$ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum38= q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum38);
				
			}
			else if(u=='c' || u=='T')
			{
				printf("\nYour choice is Tiger beer!!\n");
				printf("Its price is 13$ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum39= q*13.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum39);
			}
			else if(u== 'd' || u== 'a')
			{
				printf("\nYour choice is anchor beer!!\n");
				printf("Its price is 15 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum40=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum40);
				
			}
			else if(u== 'e' || u== 'c')
			{
				printf("\nYour choice is corona beer!!\n");
				printf("Its price is 17 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum41=q*17.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum41);
			}
				else if(u== 'f' || u== 'G')
			{
				printf("\nYour choice is Gangsberg!!\n");
				printf("Its price is 18 $ per bottle!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum42=q*18.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum42);
			}
			else{
				printf("\nInvalid Choice!!");
			}
			break;
			case '9':
			case 'f':
			printf("\n Your choice is Fast Food!!\n");
        	printf("What is Fast Food do you want to buy?\n");
        	printf("a.[F]ried Chicken\t b.[R]oast chicken\t c.[S]andwich\t d.[B]urger\t e.[P]izza\t f.[C]hips\t \n ");
        	printf("Enter your choice as a,b,c,d,e,f,C,M,P,S,O,I:");
        	scanf("%s",&v);
        	if(v=='a' || v == 'F')
        	{
        		printf("\nYour choice is Fried Chicken!!\n");
        		printf("\nIts price is 12$ per set!!\n");
        		printf("Enter your quantity:");
        		scanf("%d",&q);
        		float sum43=q*12.0;
        		printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum43);
			}
			else if(v=='b' || v=='R')
			{
				printf("\nYour choice is Roast chicken!!\n");
				printf("Its price is 15$ per set!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum44= q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum44);
				
			}
			else if(v=='c' || v=='S')
			{
				printf("\nYour choice is Sandwich!!\n");
				printf("Its price is 13$ per set!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum45= q*13.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum45);
			}
			else if(v== 'd' || v== 'B')
			{
				printf("\nYour choice is Burger!!\n");
				printf("Its price is 15 $ per set!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum46=q*15.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum46);
				
			}
			else if(v== 'e' || v== 'P')
			{
				printf("\nYour choice is Pizza!!\n");
				printf("Its price is 17 $ per set!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum47=q*17.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum47);
			}
				else if(v== 'f' || v== 'C')
			{
				printf("\nYour choice is Chpis!!\n");
				printf("Its price is 18 $ per set!!\n");
				printf("Enter your quantity:");
				scanf("%d",&q);
				float sum48=q*18.0;
				printf("Quantity\t Total\n");
        		printf("\t%d\t%4.1f$",q,sum48);
			}
			else{
				printf("\nInvalid Choice!!");
			}
			break;
				           
   }
}
