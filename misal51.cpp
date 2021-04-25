#include <iostream>
using namespace std;

int main()
{
   char s[20];
   int n=sizeof(s)/sizeof(char); 
   gets(s);
   for(int i=0;i<=n;i++) { 
      if(s[i]>='a' && s[i]<='z')
      {
	  s[i]=s[i]-32;
      }
   }
   cout<<s;
   return 0;
}
