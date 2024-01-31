#include<iostream>
using namespace std;

int main(){
    double travels, reimbursement;
    cout<<"Enter the distance traveled in miles : ";
    cin>>travels;

    if (travels>100){
        reimbursement=travels*0.5;
        cout<<"Total travel expense reimbursement for employees is : $"<<reimbursement<<endl;
    }else{
        reimbursement=travels*0.4;
        cout<<"Total travel expense reimbursement for employees is : $"<<reimbursement<<endl;
    }
    return 0;
}