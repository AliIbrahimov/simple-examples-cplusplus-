#include <iostream>
using namespace std;
int main(){
    int i,k,r;
    char s[70];
    cout<<"Cumle daxil edin: "<<endl;
    gets(s);
    k=0;
    r=0;
    i=0;
    while(s[i])
    {
	    
    
		if (islower(s[i]))
                k++;
        if (isdigit(s[i]))
                r++;
        i++;
    }
    cout<<"Cumlede "<< r <<" reqem  var."<<endl;
    cout<<"Cumlede "<< k <<" kicik herif var."<<endl;
      return 0;
}

