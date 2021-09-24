#include<iostream>
using namespace std;
class circle
{
    public:
    void area( int radius)
    {
       cout<<"area of circle"<<(3.14 *radius*radius);
       return;
    }
    void area(int base ,int height)
    {
        cout<<"area of tringle "<<(0.5 *base *height)<<("\n");
    }
    void area(float length ,float breath)
    {
        cout<<"\narea of ractangle"<<((0.5) *length *breath)<<("\n");
    }
};
int main()
{
  int option; 
  circle c1;
  cout<<"Choose Option\n";
  cout<<"1.Triangle\n";
  cout<<"2.Circle\n";
  cout<<"3.Rectangle\n";
  cin>>option;
  switch(option)
  {
      case 1:
        c1.area(1,1);
        break;
      case 2:
        c1.area(1);
        break;
      case 3:
        c1.area(1.1,1);
        break;
      default:
        cout<<"Invalid\n";
  }

 return 0;
}