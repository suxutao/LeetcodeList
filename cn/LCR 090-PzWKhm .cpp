#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    tuple<int,bool,int> r(vector<int>& nums){
        vector<pair<int,bool>>v(nums.size());
        v[0]= {nums[0],true};
        if (nums[1]>nums[0])
            v[1]={nums[1],true};
        else
            v[1]={nums[0],false};
        for (int i = 2; i < nums.size(); ++i) {
            if (v[i-1].second){
                if (nums[i]+v[i-2].first>v[i-1].first)
                    v[i]={nums[i]+v[i-2].first,true};
                else
                    v[i]={v[i-1].first,false};
            }else{
                v[i]={v[i-1].first+nums[i],true};
            }
        }
        return {v[nums.size() - 1].first,v[nums.size() - 1].second,v[nums.size()-2].first};
    }
    int rob(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0];
        int sum1,bool1,s1,sum2,bool2,s2;
        tie(sum1,bool1,s1)= r(nums);
        reverse(nums.begin(), nums.end());
        tie(sum2,bool2,s2)= r(nums);
        if (bool1&&bool2){
            return max(s1,s2);
        }else{
            return sum1;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}