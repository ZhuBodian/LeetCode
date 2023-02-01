/*88. 合并两个有序数组

*/

//头文件
#include <vector>
#include <iostream>

using namespace std;


//leetcode代码
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = m - 1, index2 = n - 1;

        for (int i = m + n - 1; i >= 0;i--) {
            if (index2 < 0 || (i >= 0 && nums1[index1] >= nums2[index2])) { // 当index2越界，或者nums1对应值更大，就要那个值
                nums1[i] = nums1[index1--];
            }
            else {
                nums1[i] = nums2[index2--];
            }
        }
    }
};


//主函数
int main() {
    vector<int> nums1{2,0}, nums2{ 1 };
    int m=1, n= 1;

    Solution solution;
    solution.merge(nums1, m, nums2, n);


    return 0;
}