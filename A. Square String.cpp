#include<stdio.h>
#include<string.h>
char s[100005]; //�洢�ַ��� 
int main(){
	int n; //�ַ�������
	scanf("%d",&n);
	while(n--){  //С���ɣ���while�ķ�ʽ�����ٿռ临�Ӷȣ��� 
		int cnt=0;  //�����ַ���ǰ���ַ��ﵽ�ظ��ĸ��� 
		scanf("%s",s);
		int len = strlen(s); //�����ַ������ȣ������������м����� 
		for(int i=0;i<(len+1)/2;i++){
			if(s[i]==s[(len+1)/2+i]){
				cnt++;
			}
		}
		if(cnt==(len+1)/2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	} 
	return 0;
} 

//֪ʶ�㣺��char�ķ�ʽ�洢�ַ������Ϳ��Ժܺô����ַ����� 
