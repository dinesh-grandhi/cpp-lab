// Takes two integer operands and one operator form the user, performs the operation and then 
// prints the result.
#include<iostream>

using namespace std;

int main()
{
	int a1,a2;
	char ch;
	cout<<"enter operator"<<endl;
	cin>>ch;
	cout<<"enter 1st integer"<<endl;
	cin>>a1;
	cout<<"enter 2nd integer"<<endl;
	cin>>a2;
	switch(ch)
	{
		case '+': cout<<"result:"<<a1+a2<<endl;
		break;
		case '-': cout<<"result:"<<a1-a2<<endl;
		break;
		case '/': cout<<"result:"<<a1/a2<<endl;
		break;
		case '*': cout<<"result:"<<a1*a2<<endl;
		break;
		case '%': cout<<"result:"<<a1%a2<<endl;
		break;
		default: cout<<"operator invalid"<<endl;
		break;
	}
}
