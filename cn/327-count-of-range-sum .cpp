#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
template<typename T>
class FenwickTree {
    int n;
    vector<T> tree;
public:
    FenwickTree(int n) : tree(n + 1),n(n) {}
    void update(int i, T val) {
        for (; i < tree.size(); i += i & -i) {
            tree[i] += val;
        }
    }
    T pre(int i) const {
        T res = 0;
        for (; i > 0; i &= i - 1) {
            res += tree[i];
        }
        return res;
    }
    T query(int l, int r) const {
        if (r < l) {
            return 0;
        }
        return pre(r) - pre(l - 1);
    }
};
class Solution {
public:
    using ll = long long;
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n=nums.size(),cnt=0,ans=0;
        vector<ll>pre(n+1);
        set<ll>s;
        unordered_map<ll,int>m;
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+nums[i];
        }
        for (auto &i: pre){
            s.insert(i);
            s.insert(i-lower);
            s.insert(i-upper);
        }
        for (auto &i: s){
            m[i]=++cnt;
        }
        FenwickTree<int>tree(cnt+1);
        for (int i = 0; i <= n; ++i) {
            int r=m[pre[i]-lower],l=m[pre[i]-upper];
            ans+=tree.pre(r)-tree.pre(l-1);
            tree.update(m[pre[i]],1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}