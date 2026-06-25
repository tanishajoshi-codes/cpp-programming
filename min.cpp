#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5,10,15,20,25};
     int smallest = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "smallest : " << smallest << endl;
}