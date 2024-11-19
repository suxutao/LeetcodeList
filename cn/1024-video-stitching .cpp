#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(), clips.end(),[&](vector<int>&a,vector<int>&b){
            if (a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        });
        if (clips[0][0])
            return -1;
        int r=clips[0][1],ans=1;
        for (int j = 1; j < clips.size();) {
            if (r>=time)
                return ans;
            int you=0;
            for (; j < clips.size()&&r>=clips[j][0]; ++j) {
                you= max(you,clips[j][1]);
            }
            if (you==0)
                return -1;
            r=you;ans++;
        }
        return r>=time?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{0,2},{1,6},{3,10}};
    Solution().videoStitching(v,10);
    return 0;
}