#include <iostream>
using namespace std;

int main(){

int number;
cout<<"Enter a number from 0 to 12: "<<endl;
cin>>number;
cout<<"Multiplication table of "<<number<<endl;

for(int x=0; x<=12;){
   cout<<number<<"*"<<x<<"="<<number*x<<endl;
   x++;
}
    return 0;
}