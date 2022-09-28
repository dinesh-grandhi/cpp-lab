// Programs to understand different function call mechanism.
// a. call by reference
#include<iostream>

using namespace std;
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int main()
{
	int a,b;
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	cout<<"values before swaping"<<endl;
	cout<<"a="<<a<<" b="<<b<<endl;
	swap(a,b);
	cout<<"after swaping"<<endl;
	cout<<"a="<<a<<" b="<<b<<endl;
}
