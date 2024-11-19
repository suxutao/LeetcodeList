#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int,int>m;
        vector<int>ans;
        for (auto &i: nums){
            m[i]++;
        }
        for (int i = 0; i < moveFrom.size(); ++i) {
            if (moveFrom[i]==moveTo[i])
                continue;
            if (m[moveFrom[i]]){
                m[moveTo[i]]+=m[moveFrom[i]];
                m[moveFrom[i]]=0;
            }
        }
        for (auto &i: m){
            if (i.second)
                ans.push_back(i.first);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}