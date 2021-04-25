#include<iostream>
using namespace std;
int main() {
	int a,b,smallest=9;
	while(true) {
		cin>>a;
		if(a>999 && a<10000)
	break;
	} 
    while(a) {
     b=a%10;
    smallest= min(b,smallest);
     a=a/10;
   
    }
	 cout<<smallest;
	return 0;
}
