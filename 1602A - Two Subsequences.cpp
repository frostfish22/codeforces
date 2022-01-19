#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll t;
int main(){
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		string p = a;
		sort(p.begin(),p.end());
		cout<<p[0]<<" ";
		a.erase(a.begin()+a.find(p[0]));
		cout<<a<<endl;
	}
	return 0;
} 
