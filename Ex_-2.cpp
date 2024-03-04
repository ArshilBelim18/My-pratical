#include<iostream>
using namespace std;

int main()
{
    int quantity;
    int cost;
    int price;
    cout << "Enter quantity:" << endl;
    cin >> quantity;
    cout << "Enter price" << endl;
    cin >> price;
    cost=quantity*price;
    cout << "cost is:"<<cost<< endl;
    if(cost>=1000){
    cout << "Your total discount is:" <<cost<<endl;    
    cout << cost-(cost*0.1) << endl;    
     }
     else{
     cout <<"discount is not applicable"<<endl;
     int total=cost;
     cout << "Your total cost is:" <<cost<< endl;
     }
     
    return 0;
}