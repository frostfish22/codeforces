#include<stdio.h>
#include<string.h>
char s[100005]; //存储字符串 
int main(){
	int n; //字符串个数
	scanf("%d",&n);
	while(n--){  //小技巧：用while的方式来减少空间复杂度！！ 
		int cnt=0;  //计算字符串前后字符达到重复的个数 
		scanf("%s",s);
		int len = strlen(s); //计算字符串长度，后期用来算中间索引 
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

//知识点：用char的方式存储字符串，就可以很好处理字符串！ 
