#include<iostream>
using namespace std;

int main(){
    double speed,fine;
    cout<<"Enter the speed of your vehicle in km : ";
    cin>>speed;

    if (speed>120){
        fine=(speed-120)*10;
        cout<<"Your fine will be : $"<<fine<<endl;
    }else{
        cout<<"Thank you for following safety guidelines."<<endl;
    }
    return 0;
}