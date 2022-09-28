// To find the factorial of a given integer.

#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"enter factorial number"<<endl;
	cin>>n;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"factorial of given number is:"<<fact<<endl;
	
	return 0;
}
