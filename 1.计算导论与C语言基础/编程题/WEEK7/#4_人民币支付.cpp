/*
描述
从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。

输入
一个小于1000的正整数。

输出
输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数

*/

#include <iostream>
using namespace std;



int main() {

    int n, n1, n2, n3, n4, n5, n6, remain;

    cin >> n;

    if (n < 0 || n >= 1000){
        cout << "数字超出范围!";
        return 0;
    }

    //计算需要多少张百元面钞
    n1 = n / 100;
    remain = n % 100;

    // 计算需要多少张五十面钞
    n2 = remain / 50;
    remain %= 50;

    // 计算需要多少张二十面钞
    n3 = remain / 20;
    remain %= 20;

    // 计算需要多少张十元面钞
    n4 = remain / 10;
    remain %= 10;

    // 计算需要多少张五元面钞
    n5 = remain / 5;
    remain %= 5;

    // 计算需要多少张一元面钞
    n6 = remain / 1;

    // 输出结果
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
    cout << n6 << endl;


    return 0;


}
