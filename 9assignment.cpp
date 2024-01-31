#include<iostream>
using namespace std;

int main(){
    double balance, interest;
    cout<<"Enter your balance : $";
    cin>>balance;

    if (balance>1000){
        interest=balance-(balance*0.15);
        cout<<"Your balance will be : $"<<interest<<endl;
    }else{
        interest=balance-(balance*0.1);
        cout<<"Your balance will be : $"<<interest<<endl;
    }
    return 0;
}