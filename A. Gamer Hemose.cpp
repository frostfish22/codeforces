#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int t,n,h;
int ans;
int main(){
	cin.tie(0),ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>h;
		vector<int> a(n); //Ҳ���Եȼ�λvector<int> a(n,0)
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		sort(a.begin(),a.end());
		//����һ�������㷨��STL�����Դ��ģ���algorithm��
		//for(auto i:a){
		//	cout<<i<<endl;} 
		
		int x = a[n-2],y=a[n-1];
		int tmp = h%(x+y);
		if(tmp==0){
			ans=h/(x+y)*2;
		}else if(tmp<=y){
			ans = h/(x+y)*2+1;
		}else{
			ans = h/(x+y)*2+2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
