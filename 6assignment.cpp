#include<iostream>
using namespace std;

int main(){
    double books,amt,amt_of_book=90,bill;
    cout<<"enter the amt of books you have purchased : ";
    cin>>books;
    
    amt=amt_of_book*books;

    if (books>=3 && books<=5){
        bill=amt-(amt*0.05);
        cout<<"Amount of the book will be :"<<bill;
    }
    else if (books>5){
        bill=amt-(amt*0.1);
        cout<<"Amount of the book will be :"<<bill;
    }
    return  0;
}