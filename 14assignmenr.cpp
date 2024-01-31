#include<iostream>
using namespace std;

int assignment14(){
	int code;
	cout<<"1.Online gaming"<<endl;
	cout<<"2.Entertainment"<<endl;
	cout<<"3.Famly plan"<<endl;
	cout<<"4.Video streaming"<<endl;

	cout<<"Enter the number : ";
	cin >> code;
	switch(code){
	case 1:
		cout<<" 30mbps "<<endl;
		break;
	case 2:
		cout<<" 100mbps "<<endl;
		break;
	case 3:
		cout<<" 500mbps "<<endl;
		break;
	case 4:
		cout<<" 1gbps "<<endl;
		break;
	default:
		cout<<" Please input correct integer.... "<<endl;
        return assignment14();
		break;
	}
}

int main(){
    assignment14();
}