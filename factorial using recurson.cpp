#include<iostream>
using namespace std;
int fact(int n){
if(n>1){
return n*fact(n-1);
}else {
return 1;
}
}
int main()
{
int a=15;
    cout << "Fact:" <<fact(a)<<endl;
    return 0;
}