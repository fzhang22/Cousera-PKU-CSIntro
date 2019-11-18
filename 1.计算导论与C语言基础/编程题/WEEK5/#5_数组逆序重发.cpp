#include <iostream>
using namespace std;

/*
描述
将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。

输入
输入为两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。

输出
输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。

*/

int main() {
    int n;
    int nums[100];
    int l = 0, r = 0;

    // 输入数组元素中的个数和数组
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // r指向数组最后一个元素
    r =  n - 1;

    // 定义双指针指向数组首部和尾部，数组首尾的值交换后，首指针+1，尾指针-1
    // 继续交换直到首指针超过或等于尾指针
    while (l < r) {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }

    // 输出结果
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;

}
