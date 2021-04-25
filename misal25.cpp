#include<iostream>
using namespace std;
int main() {
	int a,b,largest=0;
	while(true) {
		cin>>a;
		if(a>999 && a<10000)
	break;
	} 
    while(a) {
     b=a%10;
    largest= max(b,largest);
     a=a/10;
   
    }
	 cout<<largest;
	return 0;
}
