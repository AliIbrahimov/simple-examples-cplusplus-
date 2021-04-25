#include<iostream>
using namespace std;
int main() {
	int a,b,cem=0;
		cout<<"Eded daxil edin:";
		cin>>a;
	  while(a) 
      { 
          b=a%10; 
          a=a/10; 
          if(b%2==1) 
          { 
            cem=cem+b; 
          } 
      } 
	if(cem%2==1){
		cout<<"Reqemin tek ededlerinin cemi tekdir: "<<cem<<endl;
	}
	else {
		cout<<"Reqemin tek ededlerinin cemi cutdur : "<<cem<<endl;
	}
	
	return 0;
}
