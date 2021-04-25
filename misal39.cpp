#include<iostream>
using namespace std;
int main() {
int y[13],say=0,cem=0;
float hasil=1;
for(int i=0;i<sizeof(y)/sizeof(int);i++) {
	cout<<"ededleri daxil edin: "<< i <<" : ";
	cin>>y[i];
}
for(int i=0;i<sizeof(y)/sizeof(int);i++ ) {
	if(y[i]>0) {
		say+=1;
	}
	if(y[i]==0) {
		cem+=i;
	}
	if(y[i]<0) {
		hasil*=y[i];
	}
}
cout<<"Musbet elementlerin sayi:"<<say<<endl;
cout<<"0 olan;arin cemi: "<<cem<<endl;
cout<<"Menfi ededlerin hasili: "<<hasil;

return 0;
}

