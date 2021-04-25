#include<iostream>
using namespace std;
int main() { 
  char s[70];
  int boyuk=0, kicik=0;
  gets(s);
  int n=sizeof(s)/sizeof(char);
  for(int i=0;s[i]!=0;i++) {
      if(s[i]>='a' && s[i]<='z') 
	  kicik++;
	  if(s[i]>='A' && s[i]<='Z')
	  boyuk++;
	
  }
  
  cout<<"Boyuk herflerin sayi: "<<boyuk<<endl;
  cout<<"Kicik herflerin sayi: "<<kicik<<endl;

return 0;
}

