// Generate all the prime numbers between 1 and n, where n is a value supplied by the user.
#include<iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
			{
			cout<<" "<<i;
			}
	}
	return 0;
}
