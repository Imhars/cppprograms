#include<iostream>
using namespace std;
class person
{
    public:
    string  name;
    float sal;
    public:
    void getinfo(string n,float s)
    {
        this->name=n;
        this->sal=s;
    }
        
};
int main()
{
    person p1,p2;
    p1.getinfo("vikas",5448);
        cout<<p1.name<<"  "<<p1.sal;
    p2.getinfo("harsh",875);
       /* person p1,p2;
   cout<<"Enter sal\n";
    cin>>p1.sal;
    
    cout<<"enter a name\n";
    cin>>p1.name;
    cout<<"your sal is "<<p1.sal<<"\n your name is "<<p1.name;
    */
                          return 0;
}