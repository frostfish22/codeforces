#include<iostream>
using namespace std;
int t;
int main(){
	cin>>t;
	for(int i = 0;i<t;i++){
		int n,m,k=0;
		cin>>n;
		if(n%2==0){
			cout<<"0"<<endl;
		}else{
			m=n;
			while(m>=10){
				m/=10;
				if(m%2==0){
					k++;
				}
			}
			if(m%2==0){
				cout<<"1"<<endl;
			}else if(k>=1){
				cout<<"2"<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
	return 0;
}
