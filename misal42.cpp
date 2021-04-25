#include<iostream>
using namespace std;
int main() {
	char t[60];
	int plus=1,equal=1,comma=1,minus=1;
	for(int i=0;i<sizeof(t)/sizeof(char);i++) {
    cout<<i<<". simvol"<<" ";
	cin>>t[i];
	
	if(t[i]=='=') {
		equal*=i;
	} 	
	if(t[i]=='+') {
		plus*=i;
	}
	if(t[i]==',') {
		comma*=i;
	}
	if(t[i]=='-') {
		minus*=i;
	}
	if(t[i]== '0')
	break;	
	}
	cout<<"+ larin yerlerinin hasili: "<<plus<<endl;
	cout<<"= larin yerlerinin hasili: "<<equal<<endl;
    cout<<", larin yerlerinin hasili: "<<comma<<endl;
    cout<<"- larin yerlerinin hasili: "<<minus<<endl;
return 0;
}

