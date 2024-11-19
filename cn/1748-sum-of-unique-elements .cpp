#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        for (int i:nums) {
            m[i]++;
        }
        for (auto &item: m){
            if (item.second==1)
                ans+=item.first;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}