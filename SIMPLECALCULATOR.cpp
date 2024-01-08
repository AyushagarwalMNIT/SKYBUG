#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b;

 cout<<"Enter Operator from +, -, *, / :"<<endl;
 cin>>op;

 cout<<"Enter Two numbers a and b: "<<endl;
 cin>>a>>b;

 switch(op){
    case '+':
    cout<< a <<"+"<< b <<"=" << a+b;
    break;

    case '-':
    cout<< a <<"-"<< b <<"=" << a-b;
    break;

    case '*':
    cout<< a <<"*"<< b <<"=" << a*b;
    break;

    case '/':
    cout<< a <<"/"<< b <<"=" << a/b;
    break;

    default:
    //If the operator enter is other than the mentioned
    cout<<"ERROR, Please enter the opertaor from the above four option";
    break;
 }   
 return 0;
}