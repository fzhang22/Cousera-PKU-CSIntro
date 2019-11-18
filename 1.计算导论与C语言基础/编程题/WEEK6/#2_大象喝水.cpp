#include <iostream>
using namespace std;
#include <math.h>


/*
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出
输出一行，包含一个整数，表示大象至少要喝水的桶数。
*/

int main() {
    int h, r, res;
    double v;

    cin >> h >> r;

    v = (h * 3.14159 * r * r) / 1000;

    res = ceil(20 / v);

    cout << res;

    return 0;

}
