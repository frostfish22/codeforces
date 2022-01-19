#include <bits/stdc++.h>
#define LL long long
 
using namespace std;
const int N = 1e5 + 10;
 
char num[110];
int n, t;
int sum;
 
int main() {
    while(cin >> t) {
        while(t--) {
            sum = 0;
            cin >> n;
            for (int i = 0; i < n; i++)
                cin >> num[i];
            for (int i = 0; i < n; i++) {
                if (num[i] == '0')
                    continue;
                if (i == n - 1)
                    sum += num[i] - '0';
                else
                    sum += (num[i] - '0' + 1);
            }
            cout << sum << endl;
        }
    }
    return 0;
}

