#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size(),ans=0,pre=1;
        for (int i = 0; i < k-1; ++i) {
            colors.push_back(colors[i]);
        }
        for (int i = 1; i < n+k-1; ++i) {
            if (colors[i]!=colors[i-1]){
                pre++;
            }else{
                pre=1;
            }
            ans+=pre>=k;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}