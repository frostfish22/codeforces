#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
char a[200005];
int main(){
	cin>>n;
	while(n--){
		cin>>a;
		int flag=0;
		int len=strlen(a);
		for(int i=len;i>=0;i--){
			int sum=a[i]-'0'+a[i-1]-'0';
			if(sum>9){
				flag=1;
				a[i-1]=sum/10+'0';
				a[i]=sum%10+'0';
				break;
			} 
		}
		if(flag==0){
			a[1]=a[0]-'0'+a[1];
			cout<<a+1<<endl;
		}else{
			cout<<a<<endl;
		}
	}
	return 0;
} 

