#include <iostream>
using namespace std;
class Day1{
public:
    void chess(int cheBor, int rooks) { //���̴�С�����Ӹ���
        int maxChe = (cheBor +1)/2; //���������ɵ�����ȶ����Ӹ���
        if (maxChe < rooks) {  //��������������������ɸ���,�޽�
            int ou = -1;
            cout << ou << endl;
        }
        else { //����������С�ڵ���������ɸ������н�
            int flag = -2; //��һ������λ�ñ��,��Ϊ�������ӷ��ڶԽ��ߣ�����X=Y,���ǳ�ʼ��
            for (int i = 0; i < cheBor; i++) { //x
                for (int j = 0; j < cheBor; j++) { //y
                    if (i == j && (i - flag) == 2) { //�ڶԽ��߲��Ҽ��һ���Խǣ�����֤�ȶ�
                        if (rooks > 0) { //���Ӹ���û�з���ʱ
                            cout << 'R';
                            flag = i;
                            rooks--; //����һ�����ӣ����Ӹ�������1
                        } else //����������ʱ
                            cout << '.';
                    } else { //���ڶԽ���λ��
                        cout << '.';
                    }
                }
                cout << endl;
            }
        }
    }
};


int main() {
    Day1 day1_A;
    int tesNum = 0;
    cin >> tesNum;
    int arr[tesNum][2];

    for (int i = 0; i < tesNum; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int j = 0; j < tesNum; ++j) {
        day1_A.chess(arr[j][0],arr[j][1]);
    }
    
    return 0;
}


