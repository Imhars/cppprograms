#include<iostream>
using namespace std; 
class person
{
    public:
    char name [30];
    float sal;
}p1,p2,p3;
int main()
{
    //cout<<"enter your name";
    //cout<<"enter a sal";
    cin>>p1>>p2;
    cin>>p1.sal;
    cin>>p1.name;
    cout<<"person name is\n"<<p1.name;
    cout<<"person sal is \n"<<p1.sal;


    return 0;
}