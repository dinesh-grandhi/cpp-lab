// Write a Program using copy constructor to copy data of an object to another object.

#include<iostream>

using namespace std;

class demo
{
    int num1;
    int num2;
    public:
    demo(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
    demo(const demo &n) //copy constructur
    {
        num1=n.num1;
        num2=n.num2;
    }
    void display()
    {
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }
};

int main()
{
    demo obj1(10,20);
    demo obj2=obj1;
    obj1.display();
    obj2.display();
    return 1;
}