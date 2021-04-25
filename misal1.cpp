#include<iostream>
using namespace std;
int main() {
int a, b, cem;
while(true) {
	cin>>a;
	if(a>99 && a<1000)
	break;
}
while (a>0) {
	b=a%10;
     cem+=b;
      a=a/10;
}
if(cem%2==1) {
	cout<<"Ededin reqemleri cemi tekdir";
}
else {
	cout<<"Ededin reqemleri cemi cutdur";
}
cout<<" : "<<cem;
	
	return 0;
}
