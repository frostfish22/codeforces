#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int s[4]={0};
		cin>>s[0]>>s[1]>>s[2]>>s[3];
		sort(s,s+3);
		int ans=0;
		ans+=(s[0]-1);
		ans+=(s[1]-1);
		ans+=(s[2]-1);
		if(ans>=s[3]&&s[2]-min(s[0]+s[1]+1,s[2])<=s[3]){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
