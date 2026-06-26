#include<iostream>
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
   if(isEven(8))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}