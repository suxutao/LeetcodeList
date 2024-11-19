#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int left,right;
        vector<string>v;
        for (auto &i: words){
            left=right=0;
            while (right<i.size()){
                while (right<i.size()&&i[right]!=separator){
                    right++;
                }
                if (left!=right) {
                    v.push_back(i.substr(left, right - left));
                }
                left = ++right;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}