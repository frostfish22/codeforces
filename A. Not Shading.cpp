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
				if (s[j] == 'B')f = 1;//����п���ѡ��ĺ�ɫ����
				if (s[j] == 'B' && i == r - 1 && j == c - 1)f1 = 1;//��ǵ�ǰ������ҪͿ�ڵĸ���
				else if (s[j] == 'B' && (i == r - 1 || j == c - 1))f2 = 1;//��ǰ������ҪͿ�ڸ��ӵ���/����
			}
			
		}
		if (!f)cout << -1 << endl;//���û�п���ѡ��ĺڸ����Ǿ��޷�����
		else {
			if (f1)cout << 0 << endl;//����ǵ�ǰ���� �ǾͲ���Ϳ��
			else if (f2)cout << 1 << endl;//�����ҪͿ�ڵĸ��ӵ���/���� �Ǿ�ֻҪ����һ��
			else cout << 2 << endl;//������� ����һ���ܴ�����
		}

	}
}

