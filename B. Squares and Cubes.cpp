#include<bits/stdc++.h> //����ͷ
using namespace std;
int main(){
	int x; //���ݸ��� 
	cin>>x;
	
	while(x--){ //ͨ��while���Ϳռ临�Ӷ� 
		double n;
		cin>>n;
		n+=(0.00001);
		cout<<int(pow(n,1.0/2))+int(pow(n,1.0/3))-int(pow(n,1.0/6))<<endl;
	}
	return 0;
} 
