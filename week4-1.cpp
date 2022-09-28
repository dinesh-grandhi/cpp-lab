// Write a Program which creates & uses array of object of a class.( for eg. implementing the 
// list of Managers of a Company having details such as Name, Age, etc..).

#include<iostream>

using namespace std;

class manager
{
    int eid;
    char name[30];
    int age;
    public:
        void getdata()
        {
            cout<<"enter employee Id:"<<endl;
            cin>>eid;
            cout<<"enter employee name:"<<endl;
            cin>>name;
            cout<<"enter age:"<<endl;
            cin>>age;
        }

        void putdata()
        {
            cout<<eid<<" ";
            cout<<name<<" ";
            cout<<age<<" ";
            cout<<endl;
        }
};

int main()
{
    int n,i;
    cout<<"Enter no of Managers:";
    cin>>n;
    manager emp[n];
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    cout<<"Manager Data-"<<endl;
    for(i=0;i<n;i++)
    {
        emp[i].putdata();
    }
    return 0;
}