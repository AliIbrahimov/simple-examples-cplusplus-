#include<iostream>
using namespace std;
int main() {
	char s[55];
	char minus,plus,noqver,et;
	int n=sizeof(s)/sizeof(char);
	gets(s);
	for(int i=0;i<n;i++) {
		if(s[i]=','){
			s[i]=';';
			noqver=s[i];
			if(noqver==s[i]) 
			cout<<noqver;
		}
	
		if(s[i]='+') {
			s[i]='-';
			minus=s[i];
			if(minus=s[i])
			cout<<minus;
		}
		if(s[i]='#') {
			s[i]='@';
			et=s[i];
			
		}
		
	}
	

return 0;
}

