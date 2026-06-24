#include<iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter grade : ";
    cin >> grade;

    switch(grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent";
            break;

        case 'B':
        case 'b':
            cout << "Good";
            break;

        case 'C':
        case 'c':
            cout << "Average";
            break;

        case 'D':
        case 'd':
            cout << "Pass";
            break;

        case 'F':
        case 'f':
            cout << "Fail";
            break;

        default:
            cout << "Invalid grade";
    }

    return 0;
}