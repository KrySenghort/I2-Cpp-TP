/*1. Write a function in C++ program to exchange two numbers. These two variables are passed through parameters of the 
function using pointer. void exchange(int *a, int *b)  */
#include <iostream>
using namespace std;
void exchange(int *a, int *b)
{   int t;
    t = *a;
    *a = *b;
    *b = t;	  }
int main()
{   int x, y;
    		cout<<" Enter the numbers : ";		cin>>x;
    		cout<<" Enter the numbers : ";		cin>>y;
    		cout<<" before exchange x = "<<x<<" , y = "<<y<<endl;
	   	exchange(&x, &y);
    cout<<" after exchange  x = "<<x<<" , y = "<<y<<endl;
return 0;
} 
//***************************************************************
/*	Enter the numbers : 33
	Enter the numbers : 22
	before exchange x = 33 , y = 22
	after exchange  x = 22 , y = 33  */
//**********************************************************************************************************************************************
//2. Write a function to calculate and return the roots of a quadratic equation: ax2+bx+c=0. Return x1 and x2 through 
//parameter of the function. The prototype of this function is defined by: void solveEquation(int *a, int *b, int *c); 
#include<iostream>
#include<cmath>
using namespace std;
int i;
void solveEquation(int a, int b, int c, float *x1, float *x2){
	int delta = pow(b,2)-4*a*c;
	if(delta >= 0){
		*x1 = (-b+sqrt(delta))/(2*a);
		*x2 = (-b-sqrt(delta))/(2*a);
	}
	else{
		cout<<" The roots are imaginary or complex number"<<endl;
	}
}
int main(){
	int a,b,c;
		cout<<" Enter a : ";		cin>>a;
		cout<<" Enter b : ";		cin>>b;
		cout<<" Enter c : ";		cin>>c;
 	cout<<" The roots of the quatratic equation are such that : "<<endl;
	float x1,x2;
	x1 = 0;
	x2 = 0;
 	solveEquation(a,b,c,&x1,&x2);	
	cout<<" root1 is : "<<x1<<endl;	
   	cout<<" root2 is : "<<x2<<endl;
	return 0;
} 
//***************************************************************
/*	Enter a : 1
	Enter b : -6
	Enter c : 8
	The roots of the quatratic equation are such that : 
	root1 is : 4
	root2 is : 2     */
//**********************************************************************************************************************************************
/*3. Write a C++ program to ask a user for 7 integer numbers and store in an array. Display all numbers stored in an 
array by using another pointer variable. Computer summation and multiplication of all numbers in this array using 
pointer operation. REMARK: We don�t use [ ] to access to data element. Need to use pointer operation.  */
#include<iostream>
using namespace std;
void SumMul(int number[], int *sum, int *mul){
	for(int i=0;i<7;i++){
		cout<<"\tnumber ["<<i<<"]"<<"  :  "<<number[i]<<endl;
		*sum+=number[i];
		*mul*=number[i];
	}
}
int main(){
	int number[7];
	for(int i=0;i<7;i++){
		cout<<"  Enter number ["<<i<<"]  :  ";
		cin>>number[i];
 }	
 	int sum = 0;
	int mul = 1;
	SumMul(number,&sum,&mul);
	cout<<"  The summation is\t: "<<sum<<endl;
	cout<<"  The multiplication is\t: "<<mul<<endl;
	return 0;
} 
/***************************************************************
  Enter number [0]  :  22
  Enter number [1]  :  33
  Enter number [2]  :  44
  Enter number [3]  :  55
  Enter number [4]  :  66
  Enter number [5]  :  77
  Enter number [6]  :  66
        number [0]  :  22
        number [1]  :  33
        number [2]  :  44
        number [3]  :  55
        number [4]  :  66
        number [5]  :  77
        number [6]  :  66
  The summation is      : 363
  The multiplication is : 881531488 */
//**********************************************************************************************************************************************
/* 4. Write a C++ program to ask a user for 7 integer numbers and store in an array. Then write a function that can 
return min and max values from this array. The prototype of this function is defined by: 
void findMaxMin(int number[ ], int *max, int *min);*/
#include<iostream>
using namespace std;
void findMaxMin(int number[], int *max, int *min){
	for(int i=0;i<7;i++){
		if(number[i]>*max) 
			*max=number[i];
		if(number[i]<*min)
			*min=number[i];
	}
}
int main(){
	int number[7];
	for(int i=0;i<7;i++){
		cout<<"  Enter number ["<<i<<"]  :  ";
		cin>>number[i];
}
	int min = number[0];
	int max = number[0];
	findMaxMin(number,&max,&min);
cout<<"**********************************************"<<endl;
	cout<<"  The minimum number is : "<<min<<endl;
	cout<<"  The maximum number is : "<<max<<endl;
	return 0;
}  
/***************************************************************
  Enter number [0]  :  22
  Enter number [1]  :  33
  Enter number [2]  :  44
  Enter number [3]  :  55
  Enter number [4]  :  34
  Enter number [5]  :  54
  Enter number [6]  :  76
**********************************************
  The minimum number is : 22
  The maximum number is : 76 */
//**********************************************************************************************************************************************




















