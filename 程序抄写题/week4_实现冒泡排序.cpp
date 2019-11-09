/*
输入
第一行是n，表示数组的大小

接着n行是数组的n个元素

输出
排序之后的结果

一个元素一行

请完全按照如下的程序书写代码，并在书写的过程中体会优秀的代码风格：
*/

#include <iostream>
using namespace std;

int main() {
    int n, a[1000]; // 一共n个数，n不超过100， a用来保存这些数
    cin >> n;

    //输入n个数
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    // 依次输出
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;

}
