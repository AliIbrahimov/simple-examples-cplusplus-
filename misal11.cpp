#include<iostream>
using namespace std;
int main() {
	int a,b,say=0;
	while(true) {
		cout<<"5 reqemli eded daxil edin:";
		cin>>a;
		if(a>9999 && a<100000) {
			break;
		}
	}
	while(a>0) {
	b=a%10;
	a=a/10;
	if(b%2==1 && b!=0) {
		say++;
	}	
	}
	cout<<"Daxil etdiyiniz ededdeki tek reqemlerin sayi:"<<say;
	
	
	
	return 0;
}
