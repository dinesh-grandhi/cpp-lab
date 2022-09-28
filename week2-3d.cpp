// Programs to understand storage specifiers
// d..static variables
#include<iostream>

using namespace std;

void printcount()
{
    static int count;
    cout<<"count="<<count<<endl;
    count=count+1;
}

int main(void)
{
    printcount();
    printcount();
    printcount();
}