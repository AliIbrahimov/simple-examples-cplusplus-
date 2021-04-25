#include <iostream>
using namespace std; 
int main()
{
    int x[12], i,musbet=0,sifir=0;
    for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>x[i];
    }
	for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		if(x[i]==0)
		{
		sifir+=i;
		}
		if(x[i]>0) {
			musbet+=1;
			
		}
	    }
    cout<<"0-in massivdeki yerlerinin cemi: "<<sifir;
    cout<<endl<<"massivdeki musbet ededlerin sayi:"<<musbet
	<<" ";
 return 0;   
}

