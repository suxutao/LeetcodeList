#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>vv(nums1.size()+1,vector<int>(nums2.size()+1,0));
        for (int i = 1; i < nums1.size()+1; ++i) {
            for (int j = 1; j < nums2.size()+1; ++j) {
                if (nums1[i-1]==nums2[j-1])
                    vv[i][j]=1+vv[i-1][j-1];
                else
                    vv[i][j]= max(vv[i-1][j],vv[i][j-1]);
            }
        }
        return vv[nums1.size()][nums2.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}