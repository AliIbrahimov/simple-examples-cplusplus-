#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
cout<<"Eded daxil edin:";
cin>>a;
while(a>0) {
	b=a%10;
	a=a/10;
	if(b%2==1) {
		say++;
	}
}
cout<<"Daxil edilen ededde tek reqemler:"<<say;
return 0;
}

