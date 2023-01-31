/*x的平方根

*/

//头文件
#include <vector>
#include <iostream>

using namespace std;


//leetcode代码
// 二分法，左闭右闭
class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        while (left <= right) {
            long middle = left + (right - left) / 2;
            if (middle * middle > x) {
                right = middle - 1;
            }
            else if (middle * middle < x) {
                left = middle + 1;
            }
            else {
                return middle;
            }
        }
        return left - 1;
    }
};

//牛顿迭代法






//主函数
int main() {
    int x = 10;

    Solution solution;
    cout << solution.mySqrt(x) << endl;


    return 0;
}