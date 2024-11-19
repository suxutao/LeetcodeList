#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>v1(5,1);
        vector<int>v2(5);
        for (int i = 1; i < n; ++i) {
            v2[0]=v1[0];
            for (int j = 1; j < 5; ++j) {
                v2[j]=v2[j-1]+v1[j];
            }
            copy(v2.begin(),v2.end(),v1.begin());
        }
        int ans=0;
        for (int i = 0; i < 5; ++i) {
            ans+=v1[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}