#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(vector<vector<int>>&v,int n){
        for (auto &i: v){
            if (!count(i.begin(), i.end(),n))
                return false;
        }
        return true;
    }
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        for (int i = 1; i <= 1000; ++i) {
            if (f(nums,i))
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}