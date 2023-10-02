#include<stdio.h>
#include<conio.h>
int main()
{
    int units;
    float total_bill;
    printf("\n\nYOU ARE WELLCOME IN WATER BOARD DEPPARTMENT\n.\n");
    printf("WATER BOARD RATE CHART (Rates/Unit)\n\n");
    printf("An water board charges the following rates to domestic users to discourage large consumption:\n\n");
    printf("0 Unit to 50 Units ..................................=Rs.2/Unit\n\n");
    printf("51 Unit to 100 Units .............................. =Rs.3/Unit\n\n");
   printf("101 Unit to 200 Units .............................. =Rs.4/Unit\n\n");
    printf("201 Unit to 300 Units .............................. =Rs.5/Unit\n\n");
    printf("301 Unit to 400 Units .............................. =Rs.6/Unit\n\n");
    printf("401 Unit to 500 Units .............................. =Rs.7/Unit\n\n");
    printf("and more than 500 Uits .............................. =Rs.8/Unit\n");
    printf(".............................................................\n\n");
    printf("\nPlease enter the number of units which has been used as per cube meter\n\n");
    scanf("%d",&units);
    if(units <= 50)
            total_bill = units * 2;
    else if(units <= 100)
            total_bill = units * 3;
    else if(units <= 200)
           total_bill = units * 4;
     else if(units <= 300)
           total_bill = units * 5;
     else if(units <= 400)
           total_bill = units * 6;
     else if(units <= 500)
           total_bill = units * 7;
     else
           total_bill = units * 8;
      printf("\n\nthe bill to be paid by you Rs.%f", total_bill);
      getch();
}
