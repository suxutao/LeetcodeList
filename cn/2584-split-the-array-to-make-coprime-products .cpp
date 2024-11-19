#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findValidSplit(vector<int>& nums) {
        unordered_map<int,set<int>>m;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 2; j*j <= nums[i]; ++j) {
                if (nums[i]%j==0){
                    m[j].insert(i);
                    while (nums[i]%j==0)
                        nums[i]/=j;
                }
            }
            if (nums[i]>1)
                m[nums[i]].insert(i);
        }
        for (int i = 0; i < nums.size()-1; ++i) {
            bool f=true;
            for (auto &[_,a]: m){
                if (i>=*a.begin()&&i<*a.rbegin()){
                    f=false;
                    break;
                }
            }
            if (f)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}