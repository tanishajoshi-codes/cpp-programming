#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age :"  ;
    cin >> age;
    if(age >= 18)
    {
        cout << "Elegible to vote." ;
    }
    else
    {
        cout << "Not elegible to vote." ;
    }
    return 0;
}