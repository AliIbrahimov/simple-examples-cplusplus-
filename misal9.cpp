#include<iostream>
using namespace std;
int main() {
int a,b,say=0;
while(true) {
	cin>>a;
	if(a>99 && a<1000)
	break;
            }

 while(a>0) {
	b=a%10;
	if(b%2==1) {
		say++;
	}
	a=a/10;
	}
cout<<"Daxil edilmish ededde tek reqemlerin sayi:"<<say;

return 0;
}

