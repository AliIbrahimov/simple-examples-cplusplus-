#include<iostream>
using namespace std;
int main() {
	char t[40];
	int plus=0,equal=0,comma=0,minus=0;
	for(int i=0;i<sizeof(t)/sizeof(char);i++) {
	cin>>t[i];
	if(t[i]=='=') {
		equal++;
	} 	
	if(t[i]=='+') {
		plus++;
	}
	if(t[i]==',') {
		comma++;
	}
	if(t[i]=='-') {
		minus++;
	}
	if(t[i]== '0')
	break;	
	}
	cout<<"+ larin sayi: "<<plus<<endl;
	cout<<"= larin sayi: "<<equal<<endl;
    cout<<", larin sayi: "<<comma<<endl;
    cout<<"- larin sayi: "<<minus<<endl;
return 0;
}

