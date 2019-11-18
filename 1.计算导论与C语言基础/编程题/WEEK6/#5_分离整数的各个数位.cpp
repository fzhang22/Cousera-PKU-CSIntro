#include <iostream>
using namespace std;

/*

描述
从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。

输入
一个任意的三位整数

输出
一个任意的三位整数

*/

int main() {
    int n, n1, n2, n3;

    cin >> n;

    n1 = n / 100;

    n2 = (n - n1 * 100) / 10;

    n3 = n - n1 * 100 - n2 * 10;

    cout << n1 << "\n" << n2 << "\n" << n3;

    return 0;
}
