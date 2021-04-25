#include<iostream>
using namespace std;
int main() {
int x,y,z,t,cavab; 
cin>>x>>y>>z>>t;
cavab = (x>y && x>z && x>t) ? x :(y>x && y>z && y>t) ? y :(z>x && z>y && z>t) ? z :t;
cout<<"En oyuk: "<<
cavab;
return 0;
}

