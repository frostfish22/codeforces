#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, r, c;
		cin >> n >> m >> r >> c;
		int f = 0, f1 = 0, f2 = 0;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			for (int j = 0; j < m; j++) {
				if (s[j] == 'B')f = 1;//标记有可以选择的黑色格子
				if (s[j] == 'B' && i == r - 1 && j == c - 1)f1 = 1;//标记当前格子是要涂黑的格子
				else if (s[j] == 'B' && (i == r - 1 || j == c - 1))f2 = 1;//当前格子在要涂黑格子的行/列上
			}
			
		}
		if (!f)cout << -1 << endl;//如果没有可以选择的黑格子那就无法处理
		else {
			if (f1)cout << 0 << endl;//如果是当前格子 那就不用涂黑
			else if (f2)cout << 1 << endl;//如果在要涂黑的格子的行/列上 那就只要处理一次
			else cout << 2 << endl;//其余情况 两次一定能处理完
		}

	}
}

