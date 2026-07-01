#include<iostream>
using namespace std;
int main()
{
    int i;
    int pov=0;
    int neg=0;
    int zero=0;
    int arr[5];
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>0)
        {
            pov++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout<<"Positive = "<< pov<<endl;
    cout<<"Negative = "<< neg<<endl;
    cout<<"zero = "<< zero<<endl;
}