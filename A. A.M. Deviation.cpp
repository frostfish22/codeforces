#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n;
int main(){
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<(abs(a+c-2*b)%3 ? 1:0)<<endl;
		//如果增加减少c和a不改变原来的结果
		//如果改变了a或c其中一个，就会改变最终结果+3或者-3
		//也就是说，如果能被3整除就说明最小值是0，否则会变成1或者2
		//如果算绝对值的话最小只能是1 ！！ 
	}
	return 0;
} 
