#include<iostream>
using namespace std;

int main(){
    int amt;
    cout<<"Enter the money you want to withdraw : "<<"$";
    cin>>amt;

    if (amt>200){
        double charged_amt,total_amt;
        charged_amt=amt * 0.02;
        total_amt=amt - charged_amt;
        cout<<"Your amount is greater than $200 fine of 2% will be charged.\n";
        cout<<"Your final withdraw amout will be : "<<"$"<<total_amt<<endl;
        cout<<"Withdraw successfully......\n";
    }else{
        cout<<"Withdraw successfully......\n";
    }
    return 0;
}