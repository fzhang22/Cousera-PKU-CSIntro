/*
描述
输入一个0--100的分数，判断分数代表什么等级。

95<=分数<=100, 输出1

90<=分数<95,输出2

85<=分数<90,输出3

80<=分数<85,输出4

70<=分数<80,输出5

60<=分数<70输出6

分数 < 60;输出7.

输入
n

输出
m

*/

#include <iostream>
using namespace std;

int main() {
    int m;

    cin >> m;

    if (m <= 100  && m >= 95) cout << 1;
    if (m < 95 && m >= 90) cout << 2;
    if (m < 90 && m >= 85) cout << 3;
    if (m < 85 && m >= 80) cout << 4;
    if (m < 80 && m >= 70) cout << 5;
    if (m < 70 && m >= 60) cout << 6;
    if (m < 60) cout << 7;


    return 0;

}
