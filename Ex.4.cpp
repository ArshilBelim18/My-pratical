#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks" << endl;
    cin >> marks;
    switch(marks){
    case 0 ... 25 :
    cout << "Your grade is F" << endl;
    break;
    
    
    case 26 ... 45 :
    cout << "Your grade is E" << endl; 
    break;
    
    
    case 46 ... 50 :
    cout << "Your grade is D" << endl;
    break;
    
    
    case 51 ... 60 :
    cout << "Your grade is C" << endl;
    break;
    
    
    case 61 ... 80 :
    cout << "Your grade is B" << endl;
    break;
    
    
    case 81 ... 100 :
    cout << "Your grade is A" << endl;
    break;
    
    default:
    cout << "Enter valid marks" << endl;
    }
    return 0;
}