#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (nums.size()==1){
            vector<int>v(1,nums[0]);
            return v;
        }else if (nums.size()==2&&k==2){
            vector<int>v(1,max(nums[0],nums[1]));
            return v;
        }else if (nums.size()==2&&k==1){
            vector<int>v(1,nums[0]);
            v.push_back(nums[1]);
            return v;
        }
        priority_queue<pair<int,int>>p;
        vector<int>v(nums.size()-k+1);
        for (int i = 0; i < k-1; ++i) {
            p.push({nums[i],i});
        }
        for (int i = k-1; i < nums.size(); ++i) {
            p.push({nums[i],i});
            while(p.top().second<i-k+1)
                p.pop();
            v[i-k+1]=p.top().first;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}