#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
for(int i=0;; i++) {
	cin>>a;
	if(a>9999 && a<100000)
	break;
}
for(int i=0;i<=a;i++) {
	b=a%10;
	a/=10;
	if(b%2==0 && b!=0)
	say++;
}
cout<<"Ededdeki cut reqemlerin sayi:"<<say;

return 0;
}

