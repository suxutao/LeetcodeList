#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Tree{
    int n;
    vector<int>tree;
public:
    Tree(int n):tree(n+1),n(n){}

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
};
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size(),cnt=1,ans=0;
        set<long long>s;
        unordered_map<long long,int>m;
        for (auto &i: nums){
            s.insert(i);
            s.insert((long long)i*2);
        }
        for (auto &item: s){
            m[item]=cnt++;
        }
        Tree tree(cnt);
        for (int i = 0; i < n; ++i) {
            ans+=tree.sum(cnt)-tree.sum(m[(long long)nums[i]*2]);
            tree.update(m[nums[i]],1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}