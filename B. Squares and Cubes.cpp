#include<bits/stdc++.h> //万能头
using namespace std;
int main(){
	int x; //数据个数 
	cin>>x;
	
	while(x--){ //通过while降低空间复杂度 
		double n;
		cin>>n;
		n+=(0.00001);
		cout<<int(pow(n,1.0/2))+int(pow(n,1.0/3))-int(pow(n,1.0/6))<<endl;
	}
	return 0;
} 
