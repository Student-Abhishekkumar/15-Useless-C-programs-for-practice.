#include<iostream>
#include<string>
using namespace std;

int main(){
    string movie_name, day;
    int total_amt;
    cout<<"Enter the name of movie you want to see : ";
    cin>>movie_name;

    int tickets;
    cout<<"Enter the no. of tickets you want to purchase : ";
    cin>>tickets;

    cout<<"Enter the day : ";
    cin>>day;

    if (day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday"||"Monday"||"Tuesday"||"Wednesday"||"Thrusday"||"Friday"){
        total_amt=12*tickets;
        cout<<"The cost of the tickets will be : "<<"$"<<total_amt;

    }
    else if (day=="sturday"||"sunday"||"Sturday"||"Sunday"){
        total_amt=15*tickets;
        cout<<"The cost of the tickets will be : "<<"$"<<total_amt;
    }
    else{
        cout<<".........INVALID INPUT...........\n";
    }
    
}