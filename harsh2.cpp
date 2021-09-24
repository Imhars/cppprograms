#include<iostream>
using namespace std;
class box
{
    int side;
    public:
    box()
    {
        cout<<"constroctor called";
    }
    box(int s)
    {
        this->side=s;
    }
};

int main()
{
    box b1();
    return 0;
}