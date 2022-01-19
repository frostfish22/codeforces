#include <iostream>
using namespace std;
class Day1{
public:
    void chess(int cheBor, int rooks) { //棋盘大小、棋子个数
        int maxChe = (cheBor +1)/2; //棋盘能容纳的最大稳定棋子个数
        if (maxChe < rooks) {  //输入棋子数大于最大容纳个数,无解
            int ou = -1;
            cout << ou << endl;
        }
        else { //输入棋子数小于等于最大容纳个数，有解
            int flag = -2; //上一个棋子位置标记,因为采用棋子放在对角线，所以X=Y,考虑初始点
            for (int i = 0; i < cheBor; i++) { //x
                for (int j = 0; j < cheBor; j++) { //y
                    if (i == j && (i - flag) == 2) { //在对角线并且间隔一个对角，即保证稳定
                        if (rooks > 0) { //棋子个数没有放完时
                            cout << 'R';
                            flag = i;
                            rooks--; //放置一个棋子，棋子个数减少1
                        } else //棋子数放完时
                            cout << '.';
                    } else { //不在对角线位置
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


