#include<iostream>
using namespace std;
int main() {
int a,b;
while(true) {
	cin>>a;
	if(a>99 && a<1000) 
	break;
}
while(a>0) {
	b=a%10;
	a/=10;	
}


return 0;
}

