#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size(),l=0,r=0,ans=INT_MAX;
        if (unordered_set<int>(cards.begin(),cards.end()).size()==cards.size())
            return -1;
        unordered_map<int,int>m;
        while (r<n){
            ++m[cards[r]];
            if (m[cards[r]]>=2){
                while (m[cards[r]]>=2){
                    ans= min(ans,r-l+1);
                    --m[cards[l++]];
                }
            }
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{3,4,2,3,4,7};
    cout<<Solution().minimumCardPickup(v);
    return 0;
}