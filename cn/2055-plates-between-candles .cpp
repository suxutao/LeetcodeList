#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int>v(queries.size()),pos;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='|')
                pos.push_back(i);
        }
        for (int i = 0; i < v.size(); ++i) {
            int a=queries[i][0],b=queries[i][1];
            int p=lower_bound(pos.begin(), pos.end(),a)-pos.begin();
            int q=pos.rend()-lower_bound(pos.rbegin(), pos.rend(),b,greater<>())-1;
            if (q>p)
                v[i]=pos[q]-pos[p]-q+p;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{1,17},{4,5},{14,17},{5,11},{15,16}};
    Solution().platesBetweenCandles("***|**|*****|**||**|*",v);
    return 0;
}