 #include<iostream>
 using namespace std;

 int main()
 {
    int a;
    int flag=0;
      cout << "Enter a number" << endl;
      cin >> a;
      for(int i=2;i<a;++i)
    {
     {
      if(a%i==0)
      cout << "Number is not prime" << endl;
      flag=1;
      break;
     }
    }
    if(flag==0)
    {
    cout << "Number is prime" << endl;
    }
    return 0;
 }