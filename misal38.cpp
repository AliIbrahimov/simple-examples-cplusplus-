#include <iostream>
using namespace std; 
int main()
{
    int v[10], i,cem=0,say=0;
    for (i = 0; i <sizeof(v)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>v[i];
    }
	for (i = 0; i <sizeof(v)/sizeof(int); i++)
    {
		if(v[i]<0)
		{
		say+=1;
		}
		if(v[i]>0) {
			cem+=i;
			
		}
	    }
    cout<<"massivdeki mefi ededlerin sayi : "<<say
	;
    cout<<endl<<"massivin müsbet elementlerin yerlerinin cemi :"<<cem<<" ";
 return 0;   
}

