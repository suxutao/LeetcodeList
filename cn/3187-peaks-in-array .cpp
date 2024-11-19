#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class shu{
public:
    vector<int>v;
    shu(int n):v(n){}
    int lowbit(int x){
        return x&-x;
    }
    void update(int x,int val){
        while (x<v.size()){
            v[x]+=val;
            x+= lowbit(x);
        }
    }
    int sum(int x){
        int ans=0;
        while (x>0){
            ans+=v[x];
            x-= lowbit(x);
        }
        return ans;
    }
    int query(int left,int right){
        if (right<left)
            return 0;
        return sum(right)- sum(left-1);
    }
};
class Solution {
public:
    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        shu tree(n-1);
        auto update=[&](int i,int val){
            if (nums[i-1]<nums[i]&&nums[i+1]<nums[i])
                tree.update(i,val);
        };
        for (int i = 1; i < n-1; ++i) {
            update(i,1);
        }
        vector<int>v;
        for (auto &q: queries){
            if (q[0]==1){
                v.push_back(tree.query(q[1]+1,q[2]-1));
            }else{
                for (int i = max(1,q[1]-1); i <= min(n - 2, q[1] + 1); ++i) {
                    update(i,-1);
                }
                nums[q[1]]=q[2];
                for (int i = max(1,q[1]-1); i <= min(n - 2, q[1] + 1); ++i) {
                    update(i,1);
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