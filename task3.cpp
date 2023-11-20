//to-do-list
//made by diya shah
//CODSOFT
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class addtask{
    public:
    string task;
    vector<string> todolist;
    void add(){
        cout<<"enter task: ";
        cin.ignore();
        getline(cin,task);
        todolist.emplace_back(task);
        cout<<"task added successfully!"<<endl;
        cout<<endl;
}};
class updatetask:public addtask{
    public:
    int index;
    string status;
    void update(){
    cout<<"enter task number: "<<endl;
    cin>>index;
    cout<<"completed or pending?"<<endl;
    cin>>status;
    if(index>=1  && index<=todolist.size()){
        todolist[index-1]+= "-"+status;
        cout<<"task updated"<<endl;
        cout<<endl;
    }
    else{
        cout<<"invalid task index"<<endl;
        cout<<endl;
    }
}};
class deletetask:public updatetask{
    public:
    int del;
    void remove(){
        cout<<"enter index of task: "<<endl;
        cin>>del;
        if(del>=1 && del<=todolist.size()){
            todolist.erase(todolist.begin() + del -1);
            cout<<"task deleted successfully"<<endl;
            cout<<endl;
        }
        else{
            cout<<"invalid task index"<<endl;
            cout<<endl;
        }
}};
class viewtask:public deletetask{
    public:
    void view(){
        if(todolist.empty()){
            cout<<"no task available"<<endl;
            cout<<endl;
        }
        else{
            cout<<"---TO-DO LIST---"<<endl;
        for(int i=0;i<todolist.size();i++){
            cout<<"Task "<<i+1<<": "<<todolist[i]<<endl;
            cout<<endl;
        }
        }
}};
int main(){
    viewtask v;
    int n;
    cout<<"---TO-DO LIST---"<<endl;
    while(true){
    cout<<"choose one of the following:\n1. View tasks\n2. Add task\n3. Update task\n4. Remove task\n5. Quit\n\nenter option no: ";
    cin>>n;
    if(n<1 || n>5){
        cout<<"wrong input"<<endl;
    }
    else if(n==1){
        v.view();
    }
    else if(n==2){
        v.add();
    }
    else if(n==3){
        v.update();
    }
    else if(n==4){
        v.remove();
    }
    else if(n==5){
        cout<<"See you soon!"<<endl;
        break;
    }
    else{
        cout<<"wrong input"<<endl;
    }
}
return 0;
}

