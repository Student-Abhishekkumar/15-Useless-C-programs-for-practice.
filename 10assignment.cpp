#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if (age<18){
        cout<<"You have been selected for secondary screening.";
    }else{
        cout<<"You can proceed furthe.";
    }
    return 0;
}