#include<cstdio>
using namespace std;
int t,n,sum,a[105],is_prime[20005];
void init(){
    is_prime[1]=1;
    for(int i=2;i*i<=20000;i++){
        if(!is_prime[i]){
            for(int j=i*i;j<=20000;j+=i) is_prime[j]=1;
        }
    }
} //ÅÐËØÊý
int main(){
    init();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            sum+=a[i]; //ËãºÍ
        }
        if(is_prime[sum]){
            printf("%d\n",n);
            for(int i=1;i<=n;i++) printf("%d ",i);
        }
        else{
            printf("%d\n",n-1);
            for(int i=1;i<=n;i++){
                if(is_prime[sum-a[i]]){
                    for(int j=1;j<=n;j++)
                        if(i!=j) printf("%d ",j);
                    break;
                }
            }
        }
    }
}
