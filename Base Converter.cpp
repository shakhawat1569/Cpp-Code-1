//Thus code is refers to Base Converter. From 2 to 10 base, it will work properly. 
#include<iostream>
#include<cmath>
using namespace std;
class convert{
private:
int value;
int value_base;
int result_base;

public:

convert(int v, int v_b, int r_b){
value=v;
value_base= v_b;
result_base=r_b;
} 

int length( int v){
int len;
for(int i=0; v!=0; i++){
len++;
v/=10;
}
return len;
}

int createDecimal(int len){
int decimal=0,power=0,sub_value=value;
int num[len];
for(int i=0 ; i<len ; i++){
decimal+=(sub_value%10)*pow(value_base,power);
sub_value/=10;
power++;
}
return decimal;
}

int converted(int decimal){
//createDecimal();

int final_value=0,siz=0;
int arr[100];
for(int i=0; true ; i++){
if(decimal< result_base){
arr[i]=decimal;
siz++;
break;
}
arr[i]=decimal%result_base;
decimal/=result_base;
siz++;
}
for(int i=siz-1; i>=0; i--)
final_value=final_value*10+arr[i];  
    
    
    return final_value;

}

void display(int final_value){

    cout<<"The convented value is "<<final_value<<endl<<value<<"("<<value_base<<")="<<final_value<<"("<<result_base<<")";  
}
};
int main()
{
int value, valueBase, resultBase;
cout<<"Enter any value to comvert their base"<<endl;
cin>>value;
cout<<"Enter the base of "<<value<<endl;
cin>>valueBase;
cout<<"Enter the base which number system you want"<<endl;
cin>>resultBase;

convert a1(value, valueBase, resultBase);
int l=a1.length(value);
int d=a1.createDecimal(l);
//int len=a1.length(d);
int f=a1.converted(d);

a1.display(f);

    
    return 0;
}
