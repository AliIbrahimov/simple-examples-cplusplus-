#include<iostream>
using namespace std;
int main() {
int a,b,cem=0;
while(true) {
	cin>>a;
	if(a>9999 && a<100000)
	break;
}
while(a>0) {
	b=a%10;
	a/=10;
	if(b%2==0 && b!=0) {
		cem+=b;
	}
}
cout<<"Ededin cut reqemleri cemi: "<<cem;
return 0;
}

