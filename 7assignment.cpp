#include<iostream>
using namespace std;

int main(){
    double percentage,GPA;
    cout<<"Enter your percentage : ";
    cin>>percentage;

    GPA=percentage/25;

    if (GPA>3.5){
        cout<<"You are qualified for scholarship. "<<endl;
    }else{
        cout<<"You are not qualified for scholarship. "<<endl;
    }
    return 0;
}