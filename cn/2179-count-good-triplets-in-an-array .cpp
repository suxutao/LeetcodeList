#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
template<typename T>
class Tree{
    int n;
    vector<T>tree;
public:
    Tree(int n):tree(n+1),n(n){}
    void update(int i,T val){
        while (i<=n){
            tree[i]+=val;
            i+=i&-i;
        }
    }
    T pre(int i){
        T ans=0;
        while (i>0){
            ans+=tree[i];
            i-=i&-i;
        }
        return ans;
    }
};
class Solution {
public:
    using ll = long long;
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        ll n=nums1.size(),ans=0;
        vector<ll>v(n);
        Tree<ll>t(n);
        for (int i = 0; i < n; ++i) {
            v[nums1[i]]=i;
        }
        for (int i = 0; i < n; ++i) {
            nums2[i]=v[nums2[i]];
        }
        for (int i = 0; i < n; ++i) {
            int pre=t.pre(nums2[i]);
            ans+=pre*(n-1-nums2[i]-(i-pre));
            t.update(nums2[i]+1,1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}