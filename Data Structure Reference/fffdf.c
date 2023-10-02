#include<stdio.h>
#include<conio.h>
#include<math.h>
#define tab printf("\t")
int main()
{
    while(1>0){
        tab;printf("===================================\n");
        tab;printf("            MENU  CONTACT          \n");
        tab;printf("===================================\n");
        tab;printf("1.Fist program\n");
        tab;printf("2.Second program\n");
        tab;printf("3.Summation of Matrix  program\n");
        tab;printf("4.Multiplication  of Matrix  program\n");
        tab;printf("y.Do your want to continue program \n");
        tab;printf("0.Quiz  program\n");
        tab;printf("\n\n");

        char option;
        input :
        tab;printf("Please select your option :");
        scanf("%c",&option);
        if(option=='1') {
            int i,j,val[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
            for(i=0; i<3 ;i++){
                for(j=0; j<4 ;j++){
                    tab;printf("%d ",val[i][j]);
                }
                printf("\n");
            }
        }else if(option=='2'){
            int num1,num2,sum=0;
            tab;printf("Please enter the first number :");
            scanf("%d",&num1);
            tab;printf("Please enter the second number :");
            scanf("%d",&num2);
            tab;printf("********************************\n");
            int arr[num1][num2],i,j;
            for(i=0 ;i<num1 ;i++){
               for(j=0 ;j<num2;j++){
                tab;printf(" Please input  the element of array [%i][%i] = ",i,j);
                scanf("%d",&arr[i][j]);
              }
            }
            tab;printf("Size of two dimensional array %d\n",sizeof(arr)/sizeof(arr[0][0]));
            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               tab;printf("%d ",arr[i][j]);
              }
              printf("\n");
            }
            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               sum=sum+arr[i][j];
              }
            }
            tab;printf("The summation of 2D array is = %d ",sum);
            printf("\n\n");
        }else if(option=='3'){
            int num1,num2,sumR,sumC;
            tab;printf("Please enter the first number :");
            scanf("%d",&num1);
            tab;printf("Please enter the second number :");
            scanf("%d",&num2);
            tab;printf("********************************\n");
            int arr[num1][num2],i,j;
            for(i=0 ;i<num1 ;i++){
               for(j=0 ;j<num2;j++){
                tab;printf(" Please input  the element of array [%i][%i] = ",i,j);
                scanf("%d",&arr[i][j]);
              }
            }
            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               tab;printf("%d ",arr[i][j]);
              }
              printf("\n");
            }

            for(i=0 ;i<num1 ;i++){
                    sumR=sumC =0 ;
            for(j=0 ;j<num2;j++){
                sumR= sumR + arr[i][j];
                sumC=sumC + arr[i][j];
              }
             tab;printf("The summation of row separately Row[%i]= %d \n",i,sumR);
            }

        }else if(option=='4'){
            int num1,num2;
            tab;printf("Please enter the first number :");
            scanf("%d",&num1);
            tab;printf("Please enter the second number :");
            scanf("%d",&num2);
            tab;printf("********************************\n");

            int arr1[num1][num2],arr2[num1][num2],arr3[num1][num2],i,j;

            for(i=0 ;i<num1 ;i++){
               for(j=0 ;j<num2;j++){
                tab;printf(" Please input  the element of array1 [%i][%i] = ",i,j);
                scanf("%d",&arr1[i][j]);
              }
            }
            tab;printf("*******************************************\n");
            for(i=0 ;i<num1 ;i++){
               for(j=0 ;j<num2;j++){
                tab;printf(" Please input  the element of array2 [%i][%i] = ",i,j);
                scanf("%d",&arr2[i][j]);
              }
            }
           tab; printf("First\n");


            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               tab;printf("%d",arr1[i][j]);
              }
              printf("\n");
            }
            tab; printf("Second \n");

            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               tab;printf("%d",arr2[i][j]);
              }
              printf("\n");
            }
            tab;printf("\n******************Summation of matrx**************************\n");
            for(i=0 ;i<num1 ;i++){
            for(j=0 ;j<num2;j++){
               arr3[i][j]=arr1[i][j]+arr2[i][j] ;
               tab;printf("%d",arr3[i][j]);
              }
              printf("\n");
            }
        }else if(option=='y'){
            system("cls");
            goto input;
        }
        else if(option=='0'){
            tab;printf("***GoodBye****\n");
            break;

        }
    }


    return 0;

}
