#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if (age>30){
        cout<<"The health insaurance premium will be $300. ";
    }else{
        cout<<"The health insaurance premium will be $200. ";
    }
    return 0;
}