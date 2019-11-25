#include <iostream>
#include <cstdlib>
using namespace std;

/*
描述
输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。

设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

输入
输入为一行，6个正整数,且6个正整数都小于100

输入保证这6个数中至少存在一个奇数和一个偶数

输出
输出为一行，输出最大的奇数与最小的偶数之差的绝对值
*/
int main() {

    int res;
    int max_odd = 0;
    int min_even = 100;
    int arr[100];

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) {
        if (arr[i] > max_odd && arr[i] % 2 == 1) {
            max_odd = arr[i];
        }

        if (arr[i] < min_even && arr[i] % 2 == 0) {
            min_even = arr[i];
        }
    }

    res = abs(max_odd - min_even);

    cout << res;

    return 0;

}
