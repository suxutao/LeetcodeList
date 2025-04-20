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
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        int n=nums1.size(),mn=INT_MAX,mx=INT_MIN;
        ll ans=0;
        for (int i = 0; i < n; ++i) {
            nums1[i]-=nums2[i];
            mn= min(mn,nums1[i]);
            mx= max(mx,nums1[i]);
        }
        int add=(mn>0?0:1-mn);
        if (diff>=0){
            FenwickTree<ll>tree(mx+add+diff);
            for (int i = 0; i < n; ++i) {
                ans+=tree.pre(nums1[i]+add+diff);
                tree.update(nums1[i]+add,1);
            }
        }else{
            add+=1-diff;
            FenwickTree<ll>tree(mx+add);
            for (int i = 0; i < n; ++i) {
                ans+=tree.pre(nums1[i]+add+diff);
                tree.update(nums1[i]+add,1);
            }
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}