#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        double ans;
        ans=log10(x1/x2)+p1-p2; //����10�Ĵ����������жϣ��� 
        if(ans==0) cout<<"="<<endl;
        else if(ans>0) cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
}
