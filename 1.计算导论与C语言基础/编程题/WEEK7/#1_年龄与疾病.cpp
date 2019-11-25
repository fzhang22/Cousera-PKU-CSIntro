/*
描述
某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。

输入
共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。

输出
每个年龄段（分四段：18以下，19-35，36-60，大于60注意看样例输出的格式）的患病人数占总患病人数的比例，
以百分比的形式输出，精确到小数点后两位（double）。关于c++的格式化的输入输出，
请参考：http://www.cplusplus.com/reference/iomanip。也可以在网上搜索一下，资料很多的。

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double n, nums1, nums2, nums3, nums4;
    double percent1, percent2, percent3, percent4;
    int nums[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] < 18) nums1++;
        if (nums[i] >= 19 && nums[i] <= 35) nums2++;
        if (nums[i] >= 36 && nums[i] <= 60) nums3++;
        if (nums[i] > 60) nums4++;
    }

    percent1 = 100 * (nums1 / n);
    percent2 = 100 * (nums2 / n);
    percent3 = 100 * (nums3 / n);
    percent4 = 100 * (nums4 / n);

    cout << "1 - 18: " << fixed << setprecision(2) << percent1  << "%" << endl;
    cout << "19 - 35: " << fixed << setprecision(2) << percent2  << "%" << endl;
    cout << "36 - 60: " << fixed << setprecision(2) << percent3  << "%" << endl;
    cout << "60-: " << fixed <<setprecision(2) << percent4  << "%" << endl;


    return 0;

}
