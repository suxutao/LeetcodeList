#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    map<int,int>m;
    vector<vector<int>> findMatrix(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]]++;
        }
        int s=m.size();
        while (s){
            vector<int>v;
            for (auto &item: m){
                if (item.second!=0){
                    item.second--;
                    v.push_back(item.first);
                    if (item.second==0)
                        s--;
                }
            }
            vv.push_back(v);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}