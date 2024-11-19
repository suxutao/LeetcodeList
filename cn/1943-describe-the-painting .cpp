#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        vector<vector<ll>>v;
        map<ll,ll>m;
        ll qian=0,sum=0;
        for (auto &i: segments){
            m[i[0]]+=i[2];
            m[i[1]]-=i[2];
        }
        for (auto&[a,b]: m){
            if (qian&&sum)
                v.push_back({qian,a,sum});
            sum+=b;
            qian=a;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}