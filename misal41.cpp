#include<iostream>
using namespace std;
int main() {
	char t[50];
	int plus=0,equal=0,comma=0,minus=0;
	for(int i=0;i<sizeof(t)/sizeof(char);i++) {
    cout<<i<<". simvol"<<" ";
	cin>>t[i];
	
	if(t[i]=='=') {
		equal+=i;
	} 	
	if(t[i]=='+') {
		plus+=i;
	}
	if(t[i]==',') {
		comma+=i;
	}
	if(t[i]=='-') {
		minus+=i;
	}
	if(t[i]== '0')
	break;	
	}
	cout<<"+ larin yerlerinin cemi: "<<plus<<endl;
	cout<<"= larin yerlerinin cemi: "<<equal<<endl;
    cout<<", larin yerlerinin cemi: "<<comma<<endl;
    cout<<"- larin yerlerinin cemi: "<<minus<<endl;
return 0;
}

