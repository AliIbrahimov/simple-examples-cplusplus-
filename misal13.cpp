#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
while(true) {
	cin>>a;
	if(a>999 && a<10000){
		break;
	}
}
for(int i=0;i<=a;i++) {
	b=a%10;
	a=a/10;
	if(b%2==0 && b!=0) {
		say++;
	}
}
cout<<say;

return 0;
}

