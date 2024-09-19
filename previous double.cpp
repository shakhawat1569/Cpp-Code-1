//Every day's amount is double before the previous day , Program!
#include<iostream>
using namespace std;
int main(){

int a;// First day
int b;// Last day
cout<<"Enter 1st day amount "<<endl;
cin>>a;
cout<<"Enter Last day "<<endl;
cin>>b;
long sum=0;
int amount[b];

for(int i=0; i<b; i++){
sum+=a;
amount[i]=a;
a=a*2;

}
cout<<"Sum is "<<sum<<endl;
cout<<"If you want to know any fixed day amount , enter 1, otherwise enter 2 "<<endl;

int d,day;

cin>>d;
if(d==1){
cout<<"On what day? "<<endl;
cin>>day;
cout<<" In day "<<day<<" , the amount of product is "<<amount[day-1];
}
else exit(0);
return 0;
}
