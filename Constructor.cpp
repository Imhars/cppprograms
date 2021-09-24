#include<iostream>
using namespace std;

class Person
{
    public:
    Person()
    {
        cout<<"Constructor called\n";
    }
};

int main()
{
    Person p1,p2;
    cout<<"Nothing";
    return 0;
}