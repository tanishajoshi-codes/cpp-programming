#include<iostream>
using namespace std;

int main()
{
    int month;
    cin >> month;

    switch(month)
    {
        case 1:
            cout << "January";
            break;

        case 2:
            cout << "February";
            break;

        case 3:
            cout << "April";
            break;

        case 4:
            cout << "May";
            break;

        default:
            cout << "Invalid Month";
    }

    return 0;
}