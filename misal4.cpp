#include<iostream>
using namespace std;
int main(){
	int a,b,cem;
	cout<<"Eded daxil edin:"<<" ";
	cin>>a;
	while(a>0) {
		b=a%10;
		cem+=b;
		a/=10;
	}
	if(cem%2==1) {
		cout<<"Ededin reqemleri cemi tekdir:"<<" "<<cem;
	}
	else {
		cout<<"Ededin reqemleri cemi cutdur:"<<" "<<cem;
	}
	
	
	return 0;
}
