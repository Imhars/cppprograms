#include<iostream>
using namespace std;
class Person 
{
    string name;
    int age;
    float salary;
    public:
    Person(string n,int a,float s)
    {
        this->name=n;
        this->age=a;
        this->salary=s;
    }
    void getinfo()
    {
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }
};

 int main()
 {
     Person p1("Harsh",17,5);
     p1.getinfo();
     return 0;
 }