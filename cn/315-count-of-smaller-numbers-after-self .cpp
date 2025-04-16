#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    int tree[20005]{};
    void update(int i,int val){
        while (i<=n){
            tree[i]+=val;
            i+=i&-i;
        }
    }
    int sum(int i){
        int ans=0;
        while (i>0){
            ans+=tree[i];
            i-=i&-i;
        }
        return ans;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int mn=ranges::min(nums),mx=ranges::max(nums);
        int add=mn>0?0:1-mn;
        vector<int>v(nums.size());
        n=mx+add;
        for (int i = nums.size() - 1; i >= 0; --i) {
            v[i]=sum(nums[i]+add-1);
            update(nums[i]+add,1);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}