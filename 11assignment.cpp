#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"1.Vegetarain"<<endl;
    cout<<"2.Non-Vegetarain"<<endl;
    cout<<"Enter your choice";
    cin>>choice;

    if (choice==1){
        cout<<"We recommend grilled soup."<<endl;
    }
    if (choice==2){
        cout<<"We recommrnd beef stew."<<endl;
    }
    return 0;
}