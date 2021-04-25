#include<iostream>
using namespace std;
int main() {
int u,v,t;
cin>>u>>v>>t;
if(u>v && u>t) {
	cout<<u;
}
else if(v>u && v>t) {
	cout<<v;
}
else {
	cout<<t;
}

return 0;
}

