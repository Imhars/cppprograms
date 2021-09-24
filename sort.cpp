#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,4,9,2,8},temp=0;
    for (int k=0;k<5;k++)
    {
        for (int i = 0; i<5;i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }   
        }
    }
    for(int j=0;j<5;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}