#include<iostream>
#include<cmath>
using namespace std;
int main() {
 int x1,x2,x3,y1,y2,y3;
 double M;
 cout<<"x1="<<" ";cin>>x1;
 cout<<"x2="<<" ";cin>>x2;
 cout<<"x3="<<" ";cin>>x3;
 cout<<"y1="<<" ";cin>>y1;
 cout<<"y2="<<" ";cin>>y2;
 cout<<"y3="<<" ";cin>>y3;
 M=sqrt(pow((y1-x1),2) + pow((y2-x2),2) +pow((y3-x3),2));
 cout<<"Noqteler arasindaki en qisa mesafe: "<<M;
 

return 0;
}

