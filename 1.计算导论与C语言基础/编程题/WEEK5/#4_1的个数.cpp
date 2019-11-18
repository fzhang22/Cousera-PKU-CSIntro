#include <iostream>
using namespace std;

/*
描述
给定一个十进制整数N，求其对应2进制数中1的个数

输入
第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。

输出
N行，每行输出对应一个输入。
*/


int main() {

    int n;
    int nums[10];
    int count[10];

    // 输入一数字N，代表有N组测试数据
    cin >> n;

    // 初始化count数组
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    // 在每一行输入一个将要被测试的数字
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 当数字被除以2的循环中，将数字模2， 如果余数是1，就计一次数
    for (int i = 0; i < n; i++) {
        while (nums[i] / 2 != 0) {
            nums[i] /= 2;
            // 如果除以2余数为1， count加1
            if (nums[i] % 2 == 1) {
                count[i]++;
            }


        }
    }

    // 将结果输出
    for (int i = 0; i < n; i++) {
        cout << count[i] << endl;
    }


    return 0;

}
