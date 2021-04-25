#include<iostream>
using namespace std;
int main() {
int a,b;
cin>>a;
while(a>0){
	b=a%10;
	a/=10;
}
if(b%2==0 and b!=0) {
	cout<<"Ededin ilk reqemi cemdir:"<<b<<endl;
}
else {
	cout<<"Ededin ilk reqemi tekdir:"<<b<<endl;
}
return 0;
}

