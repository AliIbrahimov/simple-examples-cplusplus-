#include <iostream>
using namespace std; 
int main()
{
    int x[10], i,musbet=0,sifir=0;
    for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>x[i];
    }
	for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		if(x[i] >0)
		{
			musbet+=i;
		}
		if(x[i]==0) {
			sifir+=1;
			
		}
	    }
    cout<<"massivin müsbet elementlerinin massivdeki yerlerinin cemi: "<<musbet;
    cout<<endl<<"massivdeki sifirlarin sayi:"<<sifir
	<<" ";
 return 0;   
}

