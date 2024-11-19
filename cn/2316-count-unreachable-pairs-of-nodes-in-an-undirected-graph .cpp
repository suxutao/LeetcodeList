#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int fa[100005]{};
    unordered_map<int,int>m;
    int find_set(int x){
        return x==fa[x]?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        ll ans=0,sum=0;
        vector<ll>v;
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        for (auto &i: edges){
            merge_set(i[0],i[1]);
        }
        for (int i = 0; i < n; ++i) {
            ++m[find_set(i)];
        }
        for (auto &[a,b]: m){
            v.push_back(b);
        }
        if (v.size()==1)
            return 0;
        for (int i = 0; i < v.size(); ++i) {
            ans+=sum*v[i];
            sum+=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}