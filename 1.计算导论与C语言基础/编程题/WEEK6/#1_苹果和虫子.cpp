#include <iostream>
using namespace std;

/*
描述
你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在
吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

输入
输入仅一行，包括n，x和y（均为整数）。

输出
输出也仅一行，剩下的苹果个数
*/

int main() {
    int n, x, y, res;
    cin >> n >> x >> y;

    if ((x * n  - y) <= 0) {
        cout << 0;
        return 0;
    }

    res = (x * n - y) / x;

    cout << res;

    return 0;

}
