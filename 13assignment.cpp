#include<iostream>                   //18.5 – 24.9
using namespace std;

int main(){
    double age,BMI;
    cout<<"Enter your age : ";
    cin>>age;
    
    cout<<"Enter your bmi : ";
    cin>>BMI;

    if (BMI>=18.5 && BMI<=24.9){
        cout<<"Your are "<<age<<" years old and have a good fitness."<<endl;
    }else{
        cout<<"Your are "<<age<<" years old and doesn't have a good fitness."<<endl;
    }
    return 0;
}