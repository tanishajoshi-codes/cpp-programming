#include<iostream>
using namespace std;
int main()
{
    int key =0;
    bool found = false;
    int arr[5];
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key to search : ";
    cin>> key;
    for(int i =0;i<5;i++)
    {
        if(arr[i]==key)
        {
            found = true;
            cout<< "Found at index "<< i<<endl;
            break;
        }
    }
    if(found == false)
    {
        cout << "Not found";
    }
}