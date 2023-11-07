//number guessing game
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    cout<<"welcome to number guessing game!\nIn this,you need to guess number until you reach the final one\nso let's see your guessing power"<<endl;
    int num;
    int random=63;
    while(num>=0){
        cout<<"enter a number: ";
        cin>>num;
        if(num==random){
            cout<<"wohoo! You have got the right number\nwe hope you enjoyed\nthanks for playing";
            break;
        }
        else if(num==(random/2)){
            cout<<"you have got the half of it"<<endl;
        }
        else if(num<(random/2)){
            cout<<"oops! too low"<<endl;
        }
        else if(num>(2*random)){
            cout<<"oops! too high"<<endl;
        }
        
        else if(num>(random/2) && num<(random-10)){
            cout<<"cool! you need to guess a higher value from the previous one"<<endl;
        }
        else if(num<(2*random) && num>(random+10)){
            cout<<"cool! you need to guess a lower value from the previous one"<<endl;
        }
        else if(num>=(random-10) || num<=(random+10)){
            cout<<"you are almost there"<<endl;
        }
        else{
            cout<<"wrong answer"<<endl;
        }
    }
    return 0;
}