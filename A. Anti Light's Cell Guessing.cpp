#include<iostream>
using namespace std;
int n;
int r,c;
int main(){
	cin>>n;
	while(n--){
		cin>>r>>c;
		if(r == 1&&c==1){
			cout<<"0"<<endl;
		}else if(r==1||c==1){
			cout<<"1"<<endl;
		}else{
			cout<<"2"<<endl;
		}
	}
	return 0;
}
