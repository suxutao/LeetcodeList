#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SegmentTree {
    vector<int> mx;
    void maintain(int u){
        mx[u]=max(mx[u<<1],mx[u<<1|1]);
    }
    void build(vector<int>&v,int u,int l,int r){
        if (l==r){
            mx[u]=v[l-1];
            return;
        }
        int mid=(l+r)>>1;
        build(v,u<<1,l,mid);
        build(v,u<<1|1,mid+1,r);
        maintain(u);
    }
public:
    SegmentTree(vector<int>&v){
        mx.resize(2<<bit_width(v.size()));
        build(v,1,1,v.size());
    }
    int find(int u,int l,int r,int x){
        if (mx[u]<x){
            return -1;
        }
        if (l==r){
            mx[u]=-1;
            return l;
        }
        int mid=(l+r)>>1;
        int t= find(u<<1,l,mid,x);
        if (t==-1){
            t= find(u<<1|1,mid+1,r,x);
        }
        maintain(u);
        return t;
    }
};

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        SegmentTree t(baskets);
        int n = baskets.size(), ans = 0;
        for (int x : fruits) {
            if (t.find(1, 1, n, x) < 0) {
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}