#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int transportationHub(vector<vector<int>>& path) {
        int ru[1005]{},mx=0;
        vector<int>G[1005];
        for (auto &i: path){
            G[i[0]].push_back(i[1]);
            ru[i[1]]++;
            mx= max(mx, max(i[0],i[1]));
        }
        for (int i = 0; i <= mx; ++i) {
            if (ru[i]==mx&&G[i].empty())
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}