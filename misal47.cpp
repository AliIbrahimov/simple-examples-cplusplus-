#include<iostream>
using namespace std;
int main() {
	char s[80];
	int boyuk=0,say=0;
	gets(s);
	for(int i=0;s[i]!=0;i++) {
		if(s[i]>='A' && s[i]<='Z') 
		boyuk++;
		if(s[i]>='1' && s[i]<='9') 
		say++;
	}
	cout<<"Boyuk herflerin sayi: "<<boyuk<<endl;
	cout<<"Reqemlerin sayi: "<<say<<endl;
	


return 0;
}

