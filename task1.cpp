//number guessing  game
//made by Diya Shah
//CODSOFT
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
class game{
public:
void show(){
srand(time(0));
int num,i=0;
int random=rand() % 100 + 1;
while(i<15){
    cout<<"enter number: ";
    cin>>num;
    if(num==random){
    cout<<"wohoo! You have got the right number\nwe hope you enjoyed"<<endl;
    break;
    }
    else if(num==(random/2)){
    cout<<"you have got the half of it"<<endl;
    i++;
    }
    else if(num<(random/2)){
    cout<<"oops! too low"<<endl;
    i++;
    }
    else if(num>(random+(random/2))){
    cout<<"oops! too high"<<endl;
    i++;
    }
    else if((num>random && num<=(random+5))){
    if(num%2==0){
            cout<<"almost there"<<endl;
        }
        else{
            cout<<"too close!"<<endl;
        }
    i++;
    }
    else if(((num<random && num>=(random-5)))){
        if(num%2==0){
            cout<<"almost there.."<<endl;
        }
        else{
            cout<<"too close!"<<endl;
        }
        i++;
    }
    else if(num>(random/2) && num<(random-5)){
    cout<<"cool! you need to guess a higher value from the previous one"<<endl;
    i++;
    }
    else if(num<(random+(random/2)) && num>(random+5)){
    cout<<"cool! you need to guess a lower value from the previous one"<<endl;
    i++;
    }
else{
    cout<<"wrong answer"<<endl;
    i++;
    }
}
if(i>=15){
    cout<<"sorry you are out of moves!"<<endl;
}
}};
int main(){
cout<<"---Welcome to number guessing game!---\nIn this,you need to guess number (btw 1 to 100) until you reach the final one\nyou'll get 15 chances for it\nso let's see your guessing power"<<endl;
game g;
g.show();
char rep;
while(0==0){
cout<<"would you like to play it again?"<<endl;
    cin>>rep;
    if(rep=='y'){
        cout<<"great!"<<endl;
        g.show();
    }
    else{
        cout<<"we hope you enjoyed!\nsee you soon";
        break;
    }}
return 0; 
}