#include<iostream>
using namespace std;

  int main()
{
    int a,b;
    cout << "Enter two values" << endl;
    cin >> a>>b;
     if (a>b)
     {
     cout << "Enter proper values" << endl;
     
  return 0;
     }
      for(int i=a; i<=b; i++)
      {
      int flag=0;
      for(int j=2;j<i;j++)
      {
      if(i%j==0)
      {
      flag=1;
      break;
      }
      }
      if(flag==0)
      {
      cout << i << endl;
      }
      }
  return 0;
}   