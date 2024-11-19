#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size(),ans=0;
        for (int j = 1; j < n-1; ++j) {
            int iless=0,imore=0,kless=0,kmore=0;
            for (int i = 0; i < j; ++i) {
                if (rating[i]>rating[j])
                    imore++;
                else
                    iless++;
            }
            for (int k = j+1; k < n; ++k) {
                if (rating[k]>rating[j])
                    kmore++;
                else
                    kless++;
            }
            ans+=imore*kless+iless*kmore;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}