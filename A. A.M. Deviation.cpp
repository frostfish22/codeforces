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
		//������Ӽ���c��a���ı�ԭ���Ľ��
		//����ı���a��c����һ�����ͻ�ı����ս��+3����-3
		//Ҳ����˵������ܱ�3������˵����Сֵ��0���������1����2
		//��������ֵ�Ļ���Сֻ����1 ���� 
	}
	return 0;
} 
