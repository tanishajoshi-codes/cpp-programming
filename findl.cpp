#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    int index = 0;
    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    cout<<"Largest = "<< largest<<endl;
    cout<<"Index = "<< index<<endl;
}