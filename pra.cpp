#include<iostream>
using  namespace std;
class person
{
    public:
    string name;
    float sal;
    public:
    void getinfo (string n,float s)
    {
        this->name=n;
        this->sal=s;
    }
};

int main()
{
    person p1,p2;
    p1.getinfo("harsh",450);
    cout<<p1.name<<"  "<<p1.sal;
    p1.getinfo("\nsapna",5000);
    cout<<p1.name<<" "<<p1.sal;
    
return 0;
}