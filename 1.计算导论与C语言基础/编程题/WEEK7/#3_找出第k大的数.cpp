/*
描述
用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。

输入
N

K

a1 a2 a3 a4 ..... aN

输出
b

*/

#include <iostream>
using namespace std;


int main() {

    int n, k;
    int max = 0;
    int nums[100];

    // 输入N, K, 数组
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 先找到最大的数
    for (int i = 0; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }

    }

    // 再找到第K大的数字，要比最大的数字小但比其他所有的数字大
    while (k - 1 > 0) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > temp && nums[i] < max) {
                temp = nums[i];
            }
        }

        max = temp;
        k--;
    }

    cout << max;

    return 0;

}
