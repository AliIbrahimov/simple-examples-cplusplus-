#include<iostream>
using namespace std;
int main()
{
    int a[10], i, n=sizeof(a)/sizeof(int);
     cout<<n<<" element daxil edin ";
       for(i=0; i<n; i++)
        cin>>a[i];
     cout<<"Massivin daxil edilen elementleri:  ";
       for(i=0; i<n; i++)
     cout<<a[i]<<" ";
     cout<<endl<<"Massivin tersine cevrilmis elemntleri:  ";
       for(i=(n-1); i>=0; i--)
     cout<<a[i]<<" ";
     cout<<endl;
    return 0;
}
