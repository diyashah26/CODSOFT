//number guessing game
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
cout<<"welcome to number guessing game!\nIn this,you need to guess number (btw 1 to 100) until you reach the final one\nso let's see your guessing power"<<endl;
int num;
//int random=rand() % 100 + 1;
//cout<<"num is "<<random<<endl;
int random=20;
while(num>=0){
    cout<<"enter number: ";
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
    else if((num>random && num<=(random+5)) || ((num<random && num>=(random-5)))){
    cout<<"too close!"<<endl;
    }
    else if(num>(random/2) && num<(random-10)){
    cout<<"cool! you need to guess a higher value from the previous one"<<endl;
    }
    else if(num<(2*random) && num>(random+10)){
    cout<<"cool! you need to guess a lower value from the previous one"<<endl;
    }
    else if(num<(random-10) && num>=(random-10)){
    cout<<"you are almost there, guess a lower value"<<endl;
    }
    else if(num<(random+10) && num>=(random+10)){
    cout<<"you are almost there, guess a higher value"<<endl;
    }    
else{
    cout<<"wrong answer"<<endl;
    }
}
    return 0; 
}