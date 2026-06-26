#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[5];
    for(int i = 0; i < 5 ; i++)
    {
        cin >> arr[i];
        sum+= arr[i];
    }
    cout << sum <<endl;
}