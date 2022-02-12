#include<iostream>
using namespace std;
int t;
int a[3];
int main(){
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1]>>a[2];
		if(a[0]+a[1]==a[2]||a[0]+a[2]==a[1]||a[2]+a[1]==a[0]){
			cout<<"YES"<<endl;
		}else if(a[0]==a[1]&&a[2]%2==0||a[1]==a[2]&&a[0]%2==0||a[0]==a[2]&&a[1]%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
