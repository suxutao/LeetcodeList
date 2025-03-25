#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n=obstacles.size(),len=1;
        vector<int>d(n+1),ans(n);
        d[1]=obstacles[0];
        ans[0]=1;
        for (int i = 1; i < n; ++i) {
            if (obstacles[i]>=d[len]){
                d[++len]=obstacles[i];
                ans[i]=len;
            }else{
                int pos=upper_bound(d.begin()+1, d.begin()+len+1,obstacles[i])-d.begin();
                d[pos]= obstacles[i];
                ans[i]=pos;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}