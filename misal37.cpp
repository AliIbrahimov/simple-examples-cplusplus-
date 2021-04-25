#include <iostream>
using namespace std; 
int main()
{
    int x[12], i,hasil=1,menfi=0;
    for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>x[i];
    }
	for (i = 0; i <sizeof(x)/sizeof(int); i++)
    {
		if(x[i]<0)
		{
		menfi+=i;
		}
		if(x[i]>0) {
			hasil*=x[i];
			
		}
	    }
    cout<<"menfi ededin massivdeki yerlerinin cemi: "<<menfi;
    cout<<endl<<"massivin müsbet elementlerinin hasilii:"<<hasil<<" ";
 return 0;   
}

