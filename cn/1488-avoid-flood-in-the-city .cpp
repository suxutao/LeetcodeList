#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        set<int>s;
        unordered_map<int,int>m;
        vector<int>v(n,-1);
        for (int i = 0; i < n; ++i) {
            if (rains[i]){
                if (!m.contains(rains[i])){
                    m[rains[i]]=i;
                }else{
                    auto t=s.lower_bound(m[rains[i]]);
                    if (t==s.end())
                        return {};
                    v[*t]=rains[i];
                    s.erase(*t);
                    m[rains[i]]=i;
                }
            }else{
                s.insert(i);
                v[i]=1;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}