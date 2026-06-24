#include<iostream>
using namespace std;

int main()
{
    int num1 , num2;
    cout << "Enter first number : ";
    cin >> num1 ;
    char op ;
    cout << "Enter operator : ";
    cin >> op ;
     cout << "Enter second number : ";
    cin >> num2 ;

    switch(op)
    {
        case '+':
            cout <<num1+num2 ;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            if(num2 != 0)
            {
                cout << num1 / num2;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}