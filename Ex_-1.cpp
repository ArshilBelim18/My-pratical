#include<iostream>
using namespace std;

int main()
{
    double length, breadth;
    double area;
    cout << "Enter length of rectangle:"<< endl;
    cin >> length;
    cout << "Enter breadth of rectangle:" << endl;
    cin >> breadth;
    if(length==breadth){
    cout << "square" << endl;
    area=length*length;
    cout << "Area of square is" <<area<<endl;
    }
    else
    {
    cout << "Rectangle" << endl;
    area=length*breadth;
    cout << "Area of rectangle is:"<<area<<endl;
    }
    
    return 0;
}