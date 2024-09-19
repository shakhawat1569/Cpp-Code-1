#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=1;
   cout<<"Enter the value, which time table do you want to see?"<<endl;
   cin>>a;
   b=a;
   cout<<"How long you want to see the result?"<<endl;
   cin>>c;
   cout<<"Here are your "<<a<<"'s time table"<<endl;
    
Siam:   

cout<<a<<" * "<<d<<" = "<<b<<endl;
d++;
b=a+b;

if (b<=c)
goto Siam;

return 0;
}
