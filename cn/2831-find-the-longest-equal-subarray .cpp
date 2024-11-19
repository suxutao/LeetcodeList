#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,vector<int>>m;
    int longestEqualSubarray(vector<int>& nums, int k) {
        int ans=1;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]].push_back(i);
        }
        for (auto &item: m){
            auto i=item.second;
            vector<int>v(i.size()-1);
            for (int j = 0; j < v.size(); ++j) {
                v[j]=i[j+1]-i[j];
            }
            int l=0,r=0,sum=0;
            while (r<v.size()){
                while (r<v.size()&&sum<=k)
                    sum+=v[r++]-1;
                if (sum>k)
                    sum-=v[--r]-1;
                else{
                    ans= max(ans,r-l+1);
                    break;
                }
                ans= max(ans,r-l+1);
                sum-=v[l++]-1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}