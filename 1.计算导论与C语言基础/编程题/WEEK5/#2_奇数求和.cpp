#include <iostream>
using namespace std;

/*
描述
计算正整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m=3, n=12, 其和则为：3+5+7+9+11=35

输入
两个数 m 和 n，两个数以空格间隔，其中 0<=m <= n <= 300 。

输出
奇数之和

*/

int main() {

    // 定义数值
    int m, n;
    int sum = 0;
    cin >> m >> n;

    // 判断m和n是否符合题目要求
    if ((m > n || n > 300) || (m % 2 == 0 && m == n)) {
        cout << sum << endl;
        return 0;
    }

    // 当m <= n时，如果m是奇数，加一后再求和
    for (int i = m; i <= n; i+=2) {
        if (i % 2 == 0) i++;
        sum += i;

    }

    // 将输出打印出来
    cout << sum << endl;

    return 0;
}
