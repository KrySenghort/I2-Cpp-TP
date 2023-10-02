#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int units;
    float total_bill;
    printf("\n\nYOU ARE WELLCOME IN ELECTRTICITY BOARD DEPPARTMENT\n.\n");
    printf("ELECTRICITY BOARD RATE CHART (Rates/Unit)\n\n");
    printf("An electricity board charges the following rates to domestic users to discourage large consumption of energy:\n\n");
    printf("0 Unit to 50 Units ..................................=Rs.2.5/Unit\n\n");
    printf("51 Unit to 100 Units .............................. =Rs.3/Unit\n\n");
   printf("101 Unit to 200 Units .............................. =Rs.3.5/Unit\n\n");
    printf("201 Unit to 300 Units .............................. =Rs.4/Unit\n\n");
    printf("301 Unit to 400 Units .............................. =Rs.4.5/Unit\n\n");
    printf("401 Unit to 500 Units .............................. =Rs.4.75/Unit\n\n");
    printf("and more than 500 Uits .............................. =Rs.5/Unit\n");
    printf(".............................................................\n\n");
    printf("\nPlease enter the number of units which has been consumped as per meter\n\n");
    scanf("%d",&units);
    if(units <= 50)
            total_bill = units * 2.5;
    else if(units <= 100)
            total_bill = units * 3;
    else if(units <= 200)
           total_bill = units * 3.5;
     else if(units <= 300)
           total_bill = units * 4;
     else if(units <= 400)
           total_bill = units * 4.5;
     else if(units <= 500)
           total_bill = units * 4.75;
     else
           total_bill = units * 5;
      printf("\n\nthe bill to be paid by you Rs.%f", total_bill);
      getch();
}
