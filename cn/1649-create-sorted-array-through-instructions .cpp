#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
using ll = long long;
const int N=1e9+7;
template<typename T>
class Tree {
    int n;
    vector<T> tree;
public:
    Tree(int n) : tree(n + 1),n(n) {}

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
    int createSortedArray(vector<int>& instructions) {
        ll n=instructions.size(),ans=0,mx=ranges::max(instructions);
        Tree<ll>tree(mx);
        for (int i = 0; i < n; ++i) {
            auto l=tree.pre(instructions[i]-1);
            auto r=tree.pre(mx)-tree.pre(instructions[i]);
            ans+= min(l,r);
            tree.update(instructions[i],1);
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}