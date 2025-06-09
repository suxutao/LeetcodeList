#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        int n=x.size();
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            if (m[x[i]]<y[i])
                m[x[i]]=y[i];
        }
        if (m.size()<=2)
            return -1;
        vector<int>v;
        for (auto &[a,b]: m){
            v.push_back(b);
        }
        ranges::sort(v,greater<>());
        return v[0]+v[1]+v[2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}