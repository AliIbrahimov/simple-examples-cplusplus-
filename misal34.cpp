#include <iostream>
using namespace std; 
int main()
{
    int x[11], i,menfi=0,sifir=1;
    for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>x[i];
    }
	for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		if(x[i] ==0)
		{
			sifir*=i;
		}
		if(x[i]<0) {
			menfi+=1;
			
		}
	    }
    cout<<"massivdeki menfi elementlerin sayi : "<<menfi;
    cout<<endl<<"massivdeki sifirlarin yerlerinin hasili "<<sifir<<" ";
 return 0;   
}

