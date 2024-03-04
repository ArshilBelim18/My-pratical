#include<iostream>
using namespace std;

int main()
{
    int salary;
    int year;;
    cout << "Enter your salary :" << endl;
    cin >> salary;
    cout << "Enter your service years :" << endl;
    cin >> year;
    if(year>=5)
    {
    cout << "Your total salary is" <<endl;
    cout <<salary+(salary*0.05)<<endl;
    }
    else 
    {
    cout << "Not eligible for bonus" << endl;
    }
    cout << "Thank you for your valuable time..." << endl;
    return 0;
}