/* 283 移动0

*/

//头文件
#include <vector>
#include <iostream>

using namespace std;


//leetcode代码
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowIndex = 0;

        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            if (0 != nums[fastIndex]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }

        for (slowIndex; slowIndex < nums.size();slowIndex++) {
            nums[slowIndex] = 0;
        }


    }
};


//主函数
int main() {
    vector<int> nums{0,1,0,3,12};
    int target = 9;

    Solution solution;
    solution.moveZeroes(nums);
    // cout << solution.moveZeroes(nums) << endl;


    return 0;
}