#include <iostream>
using namespace std; 
int main()
{
    int t[12], i,hasil=1,sifir=0;
    for (i = 0; i <sizeof(t)/sizeof(int); i++)
    {
		cout<<"Ededleri daxil edin: : "<<i<<"  : ";
        cin>>t[i];
    }
	for (i = 0; i <sizeof(t)/sizeof(int); i++)
    {
		if(t[i]==0)
		{
		sifir+=i;
		}
		if(t[i]>0) {
			hasil*=i;
			
		}
	    }
    cout<<"0-in massivdeki yerlerinin cemi: "<<sifir;
    cout<<endl<<"massivdeki musbet ededlerin hasili:"<<hasil<<" ";
 return 0;   
}

