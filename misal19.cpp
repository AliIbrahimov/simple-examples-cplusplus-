#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
cin>>a;
while(a>0) {
	b=a%10;
	a/=10;
	if(b%2==0 and b!=0) {
		say++;
	}
}
cout<<say;
return 0;
}

