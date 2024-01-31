#include<iostream>     
#include<string>  
using namespace std;

int main(){
    int choice,days,costs;
    cout<<"1.Goa \n";
    cout<<"2.Australia \n";
    cout<<"3.Dubai \n";
    cout<<"4.Japan \n";
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
    case 1:
        cout<<"Price of one day and one night will be Rs.1000.\n";
        cout<<"How many days you want to stay : ";
        cin>>days;
        costs=days * 5000;
        cout<<"Your total will be : Rs."<<costs<<endl;
        break;
    
    case 2:
        cout<<"Price of one day and one night will be Rs.3000.\n";
        cout<<"How many days you want to stay : ";
        cin>>days;
        costs=days * 3000;
        cout<<"Your total will be : Rs."<<costs<<endl;
        break;
    case 3:
        cout<<"Price of one day and one night will be Rs.5000.\n";
        cout<<"How many days you want to stay : ";
        cin>>days;
        costs=days * 5000;
        cout<<"Your total will be : Rs."<<costs<<endl;
        break;
    case 4:
        cout<<"Price of one day and one night will be Rs.7000.\n";
        cout<<"How many days you want to stay : ";
        cin>>days;
        costs=days * 7000;
        cout<<"Your total will be : Rs."<<costs<<endl;
        break;
    default:
        cout<<"Please input correct integers........ \n";
        return choice;
    }
    return 0;
}