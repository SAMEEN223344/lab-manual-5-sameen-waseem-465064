#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//TASK-1:convert the while loop yo a do-while loop.
//cout<<"TASK-1"<<endl;	
//	int x=1;
//	do{
//		cout<<"entre a number:";
//		cin>>x;
//	}
//	while
//		(x>0);
//end of task-1.

//TASK-2: with the do-while loop make a simple calculator for two numbers.
//cout<<"TASK-2"<<endl;
//cout<<"simple calculator for two numbers x and y"<<endl;
//int x,y,z;
//do{ 
//    int z=0;
//    cout<<"z=0"<<endl;
//	cout<<"enter value of x:"<<endl;
//	cin>>x;
//	
//	cout<<"enter value of y:"<<endl;
//	cin>>y;
//	
//	int operation;
//	cout<<"entre the operation: + for addition, - for subtraction, / for division, * for multiplication, pow for power"<<endl;
//	switch(operation){
//		case'+':
//		z=x+y;
//		cout<<"addition"<<z<<endl;
//		break;
//		
//		case'-':
//		z=x-y;
//		cout<<"subtraction"<<z<<endl;
//		break;
//		
//		case'/':
//		z=x/y;
//		cout<<"division"<<z<<endl;
//		break;
//		
//		case'*':
//		z=x*y;
//		cout<<"multiplication"<<endl;
//		break;
//		
//		case'pow':
//		z=pow(x,y);
//		cout<<"power"<<endl;
//		break;
//		
//		default:
//		cout<<"invalid operation"<<endl;
//		break;
//	}
//	cout<<"for using more than one operation press a"<<endl;
//	int a,again;
//	cin>>a;
//	while(again==a);
//    }
//end of task-2 

//TASK-3:write a program using while and do-while that compute followings:
//sum of even numbers between 2 and 100.
//cout<<"TASK-3"<<endl;
//cout<<"part a"<<endl;
//cout<<"sum of all even numbers betwen 2 and 100"<<endl;
//int x=2,sum=0;
//while (x<=100) {
//    if (x%2==0) {
//      sum =sum+x;}
//    x++;}
//cout<<sum<<endl;


//sum of all squares between 1 and 100
//cout<<"part b"<<endl;
//cout<<"sum of all squares between 1 and 100"<<endl;
//int y=1,SUM=0;
//while(y<=100) {
//	SUM= SUM + y*y;
//	y++;}
//	cout<<SUM<<endl;
//}
//end of task-3

//TASK-4:A) all powers of 2 from  2 power 0 up to 2 power20
cout<<"TASK-4"<<endl;
cout<<"part a"<<endl;
int a=0;
while (a<=20) {

   cout<<pow(2,a)<<endl; 
    a++;
}
//B)The sum of all odd numbers between a and b (inclusive), where a and b are inputs.
cout<<"part b"<<endl;
int e,f , sum=0 ; 
cout<<"enter 1st number"<<endl;
cin>>e;
cout<<"enter 2nd number"<<endl;
cin>>f;

while (e<=f ) {
    if (e%2==1 ) {
        sum=sum+e;
    }
    e++;
}
cout<<sum<<endl;
return 0;

}
 
