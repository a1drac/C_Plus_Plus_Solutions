//Chapter 3 Solving Excercise Problem 12
//exercise_12.cpp
//Creating a four function calculator for fraction
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	char option,ch;
	do
    {

	cout <<"Enter the first fraction: "<<endl;
	cin >>a;cout <<"\n_"<<endl;cin>>b;



	cout <<"\nEnter an operator(+, -, *, /): ";
	cin >>option;

	cout <<"\nEnter the second fraction: "<<endl;
	cin >>c;cout<<"\n_"<<endl;cin>>d
	;




	switch(option) {
		case '+':
		cout <<"Addition: " <<a<<"/"<<b<<" + "<<c<<"/"<<d <<" = " <<((a*d+b*c)/(b*d)) <<endl;
		break;

		case '-':
		cout <<"Subtraction: "<<a<<"/"<<b<<" - "<<c<<"/"<<d <<" = " <<((a*d-b*c)/(b*d)) <<endl;
		break;

		case '*':
		cout <<"Multiplication: "<<a<<"/"<<b<<" * "<<c<<"/"<<d <<" = " <<((a*c)/(b*d)) <<endl;
		break;

		case '/':
		cout <<"Division: "<<a<<"/"<<b<<" / "<<c<<"/"<<d <<" = " <<((a*d)/(b*c)) <<endl;
		break;

		default:
		cout <<"Invalid Option!";
	}
	 cout << " Do another ?(y/n)";
	 cin >>ch;
    }
    while(ch !='n');
    return 0;
}

