#include<iostream>
using namespace std;
int main() {
	int a[]={2,3,4,5,1,7,3};
	int ters=a[0];
	int fake;
	for(int i=0;i<sizeof(a)/sizeof(int);i++) {
		if(ters<a[i]) {
			ters=a[i];
		}
	}
	cout<<ters<<" ";
	return 0;
}
