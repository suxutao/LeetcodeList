#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n=fruits.size(),ans=0,pos=lower_bound(fruits.begin(), fruits.end(),vector<int>{startPos+1})-fruits.begin();
        vector<int>pre(n+1);
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+fruits[i][1];
        }
        for (int i = 0; i < n; ++i) {
            auto&it=fruits[i];
            if (it[0]<=startPos){
                if (startPos-it[0]<=k){
                    ans= max(ans,pre[pos]-pre[i]);
                }
                if ((startPos-it[0])*2<=k){
                    int t=k-(startPos-it[0])*2+startPos;
                    int p=lower_bound(fruits.begin(), fruits.end(),vector<int>{t+1})-fruits.begin();
                    ans= max(ans,pre[p]-pre[i]);
                }
            }else{
                if (it[0]-startPos<=k){
                    ans= max(ans,pre[i+1]-pre[pos]);
                }
                if ((it[0]-startPos)*2<=k){
                    int t=startPos-(k-(it[0]-startPos)*2);
                    int p=lower_bound(fruits.begin(), fruits.end(),vector<int>{t})-fruits.begin();
                    ans= max(ans,pre[i+1]-pre[p]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}