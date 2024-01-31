#include<iostream>
using namespace std;

int main(){
    int total_amt;
    cout<<"Enter your age : "<<"$";
    cin>>total_amt;

    if (total_amt>100){
        double price, final_price;
        price=total_amt * 0.1;
        final_price=total_amt-price;
        cout<<"your final price of the shooping crat will be : "<<"$"<<final_price<<endl;
    }else{
        cout<<"your final price of the shooping crat will be : "<<"$"<<total_amt<<endl;
    }
    return 0;
}