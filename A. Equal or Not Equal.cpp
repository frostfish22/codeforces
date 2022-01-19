#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	cin>>n;
	while(n--){
		cin>>s;
		int a=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='N'){
				a++;
			}
		}if(a==1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
} 
