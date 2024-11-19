#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int numberOfBeams(vector<string>& bank) {
        if (bank.size()==1)
            return 0;
        int m=bank.size();
        int l=0,r,ans=0;
        v.resize(m);
        for (int i = 0; i < m; ++i) {
            v[i]= count(bank[i].begin(), bank[i].end(),'1');
        }
        while (l<m&&v[l]==0)
            l++;
        r=l+1;
        while (r<m){
            while (r<m&&v[r]==0)
                r++;
            if (r==m)
                break;
            ans+=v[l]*v[r];
            l=r++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v={"011001","000000","010100","001000"};
    Solution().numberOfBeams(v);
    return 0;
}