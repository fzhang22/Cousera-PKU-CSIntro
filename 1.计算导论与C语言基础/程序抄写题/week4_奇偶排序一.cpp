/*
描述
输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。

输入
输入十个整数

输出
按照奇偶排序好的十个整数
*/

#include <iostream>
using namespace std;

int main() {
    int a[10];

    // 输入10个数
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // 首先，我们把奇数放到数组左边， 偶数放到数组右边
    int l = 0, r = 9; //用左手和右手分别指向数组两端

    while (l <= r) {
        bool leftIsOdd = a[l] % 2 == 1;  //判断是否是奇数
        bool rightIsEven = a[r] % 2 == 0;  //判断是否是偶数

        if (leftIsOdd) {
            l++;
        } else if (rightIsEven) {
            r--;
        } else if (!leftIsOdd && !rightIsEven) {
            // l位的偶数和r位的奇数进行互换
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    // 对l左边（奇数部分）冒泡，不断比较相邻的两个数，如果顺序错了，就交换
    int start = 0, end = l;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    // 对l右边（偶数部分）冒泡， 不断比较相邻的两个数，如果顺序错了，那么就交换
    start = l; end = 10;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < end; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }

        }

    }

    // 将排序后的数字打印出来
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }

    return 0;

}
