#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans=0;
        unordered_map<int,int>m;
        for (auto &i: dominoes){
            if (i[0]>i[1])
                swap(i[0],i[1]);
            int t=i[0]<<10|i[1];
            ans+=m[t]++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}