#include<iostream>
using namespace std;
int main() {
	char s[75];
	int kicik=0,say=0;
	gets(s);
	for(int i=0;s[i]!=0;i++) {
		if(s[i]>='a' && s[i]<='z') 
		kicik++;
		if(s[i]>='1' && s[i]<='9') 
		say++;
	}
	cout<<"Kicik herflerin sayi: "<<kicik<<endl;
	cout<<"Reqemlerin sayi: "<<say<<endl;
	


return 0;
}

