#include <iostream>
using namespace std;

/*

给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。

输入
输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。

输出
输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。

*/

int main() {

    int k;
    int arr[100];
    int count_1 = 0, count_5 = 0, count_10 = 0;

    // 第一行，输入一个数字，这个数字定义k个正整数
    cin >> k;

    // 判断k值是否超出范围
    if (k <= 1 || k >= 100) {
        return 0;
    }

    // 第二行，依次输入k个正整数
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    // 分别算1，5，10出现的次数
    for (int i = 0; i < k; i++) {
        if (arr[i] == 1) count_1++;
        if (arr[i] == 5) count_5++;
        if (arr[i] == 10) count_10++;

    }

    // 将最后计算的次数按照三行输出
    cout << count_1 << endl << count_5 << endl << count_10 << endl;

    return 0;
}
