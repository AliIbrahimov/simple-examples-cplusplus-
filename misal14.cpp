#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
while(true) {
	cin>>a;
	if(a>99 && a<1000) {
		break;
	}
}
while(a>0 && b!=0) {
	b=a%10;
	if(b%2==0) {
		say++;
	}
	a=a/10;
	
}
cout<<say;

return 0;
}

