#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year" << endl;
    cin >> year;
    if(year%4==0 ||year%400==0)
    {
    cout << "This is leap year" << endl;
    }
    else
    {
    cout << "This is not leap year" << endl;
    }
    return 0;
}