#include<iostream>
using namespace std;
class BusService{
private:
int man=0;
int cost=0;

public:
void addMan(int b){
man+=b;
}
void cost_change(int a, int b){
cost+=a*b;
}
void display_passenger(){
cout<<"Total passenger amount who have gotten in the bus is "<<man<<endl;
}
void display_income(){
cout<<"Total income of the bus is "<<cost<<endl;
}
};

int main(){
int choice, a1,b1,where;
BusService c1;
do{
cout<<"This bus will go Jattrabari from Diyabari"<<endl;
cout<<"1.Get in the bus"<<endl;
cout<<"2.Amount of passenger."<<endl;
cout<<"3.Total income of Bus."<<endl;
cout<<"4.Exit."<<endl;
cout<<"Enter your choice."<<endl;;

switch(choice){
case 1:
cout<<"Where you want to go?"<<endl;
cout<<"1. Diya bari to Jattrabari-- 80 tk\n"
"2.Diyabari to Housebuilding--10 tk\n"
"3.Diyabari to Airport--20 tk\n"
"4.Housebuilding to Airport--10 tk\n"
"4.Housebuilding to Jattrabari--70 tk\n"
"5.Airport to Jattrabari--60 tk\n";
cout<<"Chose the destination where you want to go?"<<endl;
cin>>where;
if(where==1)
a1=80;
else if(where==2)
a1=10;
else if(where==3)
a1=20;
else if(where==4)
a1=10;
else if(where==5)
a1=60;
else{
cout<<"Invalid code"<<endl;
exit(0);
}
cout<<"Now enter the amount of passenger."<<endl;
cin>>b1;
c1.addMan(b1);
c1.cost_change(a1,b1);
break;

case 2:
c1.display_passenger();
break;
case 3:
c1.display_income();
break;
default:
cout<<"Please enter any fixed key"<<endl;
}
}while(choice!=4);

return 0;
}
