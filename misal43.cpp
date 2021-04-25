#include <iostream>
using namespace std;
int main(){
    int i,k,b;
    char s[70];
    cout<<"Cumle daxil edin: "<<endl;
    gets(s);
    k=0;
    b=0;
    i=0;
   
    while(s[i])
    {
	    
    
		if (islower(s[i]))
                k++;
        if (isupper(s[i]))
                b++;
        i++;
    }
    cout<<"Cumlede "<< b <<" boyuk herif var."<<endl;
    cout<<"Cumlede "<< k <<" kicik herif var."<<endl;
      return 0;
}

