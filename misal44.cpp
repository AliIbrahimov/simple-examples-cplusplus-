#include <iostream>
using namespace std;
int main(){
    int i,r,b,n;
    char s[70];
    cout<<"Cumle daxil edin: "<<endl;
    gets(s);
    r=0;
    b=0;
    i=0;
        while(s[i])
    {
	    
    
		if (isupper(s[i]))
                b++;
        if (isdigit(s[i]))
                r++;
        i++;
    }
    cout<<"Cumlede "<< r <<" reqem var."<<endl;
    cout<<"Cumlede "<< b <<" boyuk herif var."<<endl;

}
