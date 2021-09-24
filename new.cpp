#include<iostream>
using namespace std;

class dog
{
    public:
    void bark()
    {
        cout<<"bhaw bhaw\n";
    }
    void bark(int num)
    {
        for(int i=0;i<num;i++)
        {
            cout<<"bhaw bhaw\n";
        }
    }
    bool bark(bool value)
    {
        cout<<value;
        return value;
    }
};


int main()
{
    dog tiger;
    tiger.bark(6);
    return 0;
}