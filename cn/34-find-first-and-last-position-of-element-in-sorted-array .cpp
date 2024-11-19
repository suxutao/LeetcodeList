#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==0||nums.size()==1&&nums[0]!=target)
            return {-1,-1};
        if (nums.size()==1&&nums[0]==target)
            return {0,0};
        if (target==nums[0]){
            int R=0;
            while(R<nums.size()-1&&nums[R]==nums[R+1]){
                R++;
            }
            return {0,R};
        }
        if (target==nums[nums.size()-1]){
            int L=nums.size()-1;
            while(L>0&&nums[L]==nums[L-1]){
                L--;
            }
            return {L,(int)nums.size()-1};
        }
        vector<int>v(2);
        int l=0,r=nums.size()-1;
        while(l<r){
            int middle=(l+r)/2;
            if (target>nums[middle])
                l=middle+1;
            else if (target<nums[middle])
                r=middle-1;
            else{
                int left=middle,right=middle;
                while(left>=1&&nums[left]==nums[left-1])left--;
                while(right<nums.size()-1&&nums[right]==nums[right+1])right++;
                return {left,right};
            }
            if (r<0||l>=nums.size())
                break;
            if (target==nums[l]){
                int R=l;
                while(R<nums.size()-1&&nums[R]==nums[R+1]){
                    R++;
                }
                return {l,R};
            }
            if (target==nums[r]){
                int L=r;
                while(L>0&&nums[L]==nums[L-1]){
                    L--;
                }
                return {L,r};
            }
        }
        return {-1,-1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}