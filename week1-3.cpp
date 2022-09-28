// Searching an element in an array.

#include <iostream>

using namespace std;

int main()
{
    int n,i,pos=0,s;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter search element"<<endl;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<"element found at position:"<<i+1<<endl;
            pos=1;
        }
    }
    if(pos==0)
    {
        cout<<"element not found in the given list"<<endl;
    }

    return 0;
}
