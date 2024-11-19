#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),[](vector<int>&a,vector<int>&b){
            if (a[1]==b[1])
                return a[0]<b[0];
            return a[1]<b[1];
        });
        int ans=1,l=pairs[0][1];
        for (int i = 0; i < pairs.size(); ++i) {
            if (pairs[i][0]>l){
                ++ans;
                l=pairs[i][1];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}