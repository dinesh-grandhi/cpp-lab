// Write a program to demonstrate the Inline functions.

#include<iostream>

using namespace std;

inline int sum(int c,int d)
{
	return c+d;
}
int main()
{
	int a,b;
	cout<<"enter two values:"<<endl;
	cin>>a>>b;
	cout<<"sum is "<<sum(a,b)<<endl;
	
	return 0;
}
