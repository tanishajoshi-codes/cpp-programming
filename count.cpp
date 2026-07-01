#include<iostream>
using namespace std;
int main()
{
    int i;
    int even = 0;
    int odd = 0;
    int arr[5];
    for(i=0; i<5;i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<5;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
     }
     cout<< "Even = "<< even<<endl;
     cout<< "Odd = "<< odd<<endl;
}