/*844 比较含退格的字符串

*/

//头文件
#include <string.h>
#include <iostream>

using namespace std;


//leetcode代码
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        doubleIndex(s);
        doubleIndex(t);

        return s == t;
    }
    
private:
    void doubleIndex(string& s) {
        int len = s.length(), skip = 0; // 
        int slowIndex = len - 1, fastIndex = slowIndex;
        while (fastIndex >= 0)
        {
            if (s[fastIndex] == '#') {  //利用if与else if寻找第一个未被删除的字符
                skip++;
                fastIndex--;
            }
            else if (skip > 0) {
                skip--;
                fastIndex--;
            }
            else {
                s[slowIndex--] = s[fastIndex--];
            }
        }
        s = s.substr(slowIndex + 1, len);
    }
};


//主函数
int main() {
    string s = "####", t = "abc#d##";

    Solution solution;
    cout << solution.backspaceCompare(s, t) << endl;


    return 0;
}