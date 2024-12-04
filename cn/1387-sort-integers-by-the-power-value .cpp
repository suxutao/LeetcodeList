#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    int dfs(int n){
        if (n==1)
            return 0;
        if (m[n])
            return m[n];
        return m[n]=dfs((n&1)?3*n+1:n/2)+1;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>v;
        for (int i = lo; i <= hi; ++i) {
            v.emplace_back(dfs(i),i);
        }
        sort(v.begin(), v.end());
        return v[k-1].second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}