#include <bits/stdc++.h>

using namespace std;
int a[55];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        if(sum==0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            if(sum<0){
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
            }
            else {
                for(int i=n-1;i>=0;i--){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


