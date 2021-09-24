#include<iostream>
using namespace std;
class Data
{
    protected:
    float r;
    public:
    void display()
    {
    cout<<"enter radius \n";
    cin>>this->r;
    }
};
class Area:public Data
{
    float sum;
    public:
    void result()
    {
        this->sum =(3.14*r*r);
        cout<<"this area is "<<this->sum<<"\n";
    }
};
int main()
{
    Area a1;
    a1.display();
    a1.result();

    return 0;
}