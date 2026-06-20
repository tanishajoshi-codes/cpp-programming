#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , num3 ;
    cout << "Enter first number.";
    cin >> num1;
    cout << "Enter second number.";
    cin >> num2;
    cout << "Enter third number.";
    cin >> num3;
   if(num1 == num2 && num2 == num3)
{
    cout << "All numbers are equal.";
}
else if(num1 >= num2 && num1 >= num3)
{
    cout << num1 << " is larger";
}
else if(num2 >= num1 && num2 >= num3)
{
    cout << num2 << " is larger";
}
else
{
    cout << num3 << " is larger";
}
    return 0;
}