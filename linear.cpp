#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(key == arr[i])
        {
            found = true;
            break;
        }
    }

    if(found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}