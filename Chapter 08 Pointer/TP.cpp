#include<iostream>
using namespace std;
int main(){
int x=10;
	int *p;
	p=&x;
	cout<<"The value of x= "<<x<<endl;
	cout<<"The memory address of x ="<<p<<endl<<endl;	
int y;
	y=20;
	int *c;
	c=&y;
	cout<<"The value of y= "<<y<<endl;
	cout<<"The memory address of y ="<<c<<endl<<endl;
int i;
	char *country[5]={"Singapore","Malaysia","Cambodia","Vietnam","Thailand"};
	//because Vietnam is less one character, so it will take the adress to near it.
	for(i=0;i<=4;i++)
		cout<<country[i]<<" \t"<<&country<<endl;
	return 0;
} 
/*	The value of x= 10
	The memory address of x =0x6efe80
	The value of y= 20
	The memory address of y =0x6efe7c
	Singapore       0x6efe68
	Malaysia        0x6efe68
	Cambodia        0x6efe68
	Vietnam         0x6efe68
	Thailand        0x6efe68
    --------------------------------
	Process exited after 0.2192 seconds with return value 0
	Press any key to continue .			*/
//*********************************************************************************************
#include<iostream>
using namespace std;
double get_avg(int *arr,int size){
	int i,sum=0;
	double avg;
		for(i=0;i<size;i++){
			sum=sum+arr[i];
		}
	avg = double(sum)/size;
	return avg;
}
int main(){
	int score[5]={60,78,93,56,34};
	double avg;
	avg = get_avg(score,5);
		cout<<"The average of score is "<<avg<<endl;	
	return 0;
} 
//*****************************************************************************************
#include<iostream>
using namespace std;
double promo(double amt){
	return amt*0.05;
}
double promo(double amt, double rate){
	return amt*rate;	}
double promo(double amt, string grade){
	double rate = 0;
	if(grade=="A"){
		return amt*0.5; }
	else if(grade=="B"){
		return amt*0.3;	}
	else{
		return amt*0.15; }	
}
int main(){
	cout<<promo(1000)<<endl;
	cout<<promo(1000,0.2)<<endl;
	cout<<promo(1000,"A")<<endl;
return 0;
}  
/*	50
	200
	500
-----------------------------------------------------
Process exited after 2.191 seconds with return value 0
Press any key to continue . . . */
