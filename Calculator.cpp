#include<iostream>
using namespace std;
int main(){
	cout<<"\t\t\t\tWelcome to the Calculator here you can perform(+,-,*,/)"<<endl;
    char in;  
	do{
			int a;
	int b;
	char op;
	cout<<"Enter first number   : ";cin>>a;
	cout<<"Enter second number  : ";cin>>b;
	cout<<"Enter operation      : ";cin>>op;
	switch(op){
		case'+':
			{
				cout<<"The sum is : "<<a+b;break;
			}
		case'-':
			{
				cout<<"The Subtraction is : "<<a-b;break;
			}
		case'*':
			{
				cout<<"The Multipication is : "<<a*b;break;
			}
		case'/':
			{
				cout<<"The Division is : "<<a/b;break;
			}
		default:
			cout<<"Invalid operation ";
	}
	cout<<"\nDo you want to perform another operation press y :";cin>>in;
	}while(in=='y');
}
