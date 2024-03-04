#include<iostream>
using namespace std;

int main()
{
int number;
int absolutevalue;
cout<<"enter a number"<<endl;
cin>>number;
if(number<0)
{
absolutevalue=number*(-1);
cout<<"value is:"<<absolutevalue<<endl;
}
else
{
cout<<"number:"<<number<<endl;
 }
    return 0;
}