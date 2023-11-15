//simple calculator
//made by diya shah
//CODSOFT
#include<iostream>
using namespace std;
class input{
    public:
    float num1,num2;
    string o;
    void in(){
    cout<<"SIMPLE CALCULATOR\nPlease enter the operation you want to perform\nFor addition = 'add' or '+'\nFor subtraction = 'subtract' or '-'\nFor multiplication = 'multiply' or '*'\nFor division = 'divide' or '/'"<<endl;
    }
};
class operation:public input{
    public:
    void out(){
    cout<<"enter first value: ";
    cin>>num1;
    cout<<"enter second value: ";
    cin>>num2;
    cout<<"operation to perform: ";
    cin>>o;
    if(o=="add" || o=="+"){
    cout<<"sum: "<<num1+num2<<endl;
    }
    else if(o=="subtract" || o=="-"){
    cout<<"difference: "<<num1-num2<<endl;
    }
    else if(o=="multiply" || o=="*"){
    cout<<"product: "<<num1*num2<<endl;
    }
    else if(o=="divide" || o=="/"){            
    cout<<"quotient: "<<num1/num2<<endl;
    }
    else{
    cout<<"wrong choice"<<endl;
    }
}};
int main(){
    operation o;
    o.in();
    o.out();
    while(0==0){
    char n;
    cout<<"Do you want to use calculator again?\n(enter y for yes and n for no)"<<endl;
    cin>>n;
    if(n=='y'){
        o.out();
    }
    else{
        cout<<"Cool, See you soon!";
        break;
    }}
    return 0;
}