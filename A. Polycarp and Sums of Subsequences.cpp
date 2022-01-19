#include<iostream>
using namespace std;
int t;
int main(){
	cin>>t;
	int a[7];
	
	while(t--){
		for(int i=0;i<7;i++){
			cin>>a[i];
		}
		cout<<a[6]-a[5]<<" "<<a[1]<<" "<<a[5]-a[1]<<endl;
	}
	return 0;
} 
