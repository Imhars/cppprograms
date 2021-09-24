#include<iostream>
using namespace std;
int main()
{
    int num, q,r,temp,rev;
    cout<<"enter 2 number to rev it\n";
    cin>>num;
    temp=num;
    while(num>0)
    {
        q=num/10;
        r=num%10;
        rev=(rev *10)+r;
        num=q;
    }
    cout<<"rev number is"<<rev;
    return 0;
}