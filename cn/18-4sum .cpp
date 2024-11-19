#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        if (nums.size()<4)
            return v;
        int l,r;
        for (int i = 0; i < nums.size()-2; ++i) {
            if (i>0&&nums[i]==nums[i-1])
                continue;
            for (int j = i+1; j < nums.size() - 2; ++j) {
                if (j>i+1&&nums[j]==nums[j-1])
                    continue;
                l=j+1;r=nums.size()-1;
                while(l<r){
                    ll a=(ll)nums[i]+(ll)nums[j]+(ll)nums[l]+(ll)nums[r];
                    ll b=(ll)target;
                    if (a==b){
                        v.push_back({nums[i], nums[j],nums[l], nums[r]});
                        while(nums[l]==nums[l+1]&&l<r-1)
                            l++;
                        while(nums[r]==nums[r-1]&&l<r-1)
                            r--;
                        l++;r--;
                    }else if(a<b){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}