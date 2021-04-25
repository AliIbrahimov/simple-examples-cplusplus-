#include <iostream>
using namespace std; 
int main()
{
    int y[12], i,musbet=0,sifir=1;
    for (i = 0; i <sizeof(y)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>y[i];
    }
	for (i = 0; i <sizeof(y)/sizeof(int); i++)
    {
		if(y[i]==0)
		{
		sifir*=i;
		}
		if(y[i]>0) {
			musbet+=1;
			
		}
	    }
    cout<<"0-in massivdeki yerlerinin hasili : "<<sifir;
    cout<<endl<<"massivdeki musbet ededlerin sayi:"<<musbet
	<<" ";
 return 0;   
}

