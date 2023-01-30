/* 704 二分查找
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/binary-search
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


*/

//头文件
#include <vector>
#include <iostream>

using namespace std;
 
//leetcode代码
// 版本一
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; // 定义target在左闭右闭的区间里，[left, right]
        while (left <= right) { // 当left==right，区间[left, right]依然有效，所以用 <=
            int middle = left + ((right - left) / 2);// 防止溢出 等同于(left + right)/2
            if (nums[middle] > target) {
                right = middle - 1; // target 在左区间，所以[left, middle - 1]
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，所以[middle + 1, right]
            } else { // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        // 未找到目标值
        return -1;
    }
};


//主函数
int main() {
    vector<int> nums{-1, 0, 3, 5, 9, 12};
    int target = 9;

    Solution solution;
    cout << solution.search(nums, target) << endl;



    return 0;
}