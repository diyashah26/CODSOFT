//simple calculator
#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    string o;
    cout<<"SIMPLE CALCULATOR\nPlease enter the operation you want to perform\nFor addition = 'add' or '+'\nFor subtraction = 'subtract' or '-'\nFor multiplication = 'multiply' or '*'\nFor division = 'divide' or '/'"<<endl;
    while(0==0){
    cout<<"enter first value: ";
    cin>>num1;
    cout<<"enter second value: ";
    cin>>num2;
    cout<<"operation to perform: ";
    cin>>o;
    if(o=="add" || o=="+"){
    cout<<"sum: "<<num1+num2;
    }
    else if(o=="subtract" || o=="-"){
    cout<<"difference: "<<num1-num2;
    }
    else if(o=="multiply" || o=="*"){
    cout<<"product: "<<num1*num2;
    }
    else if(o=="divide" || o=="/"){            
    cout<<"quotient: "<<num1/num2;
    }
    else{
    cout<<"wrong choice"<<endl;
    }}
    return 0; 
}