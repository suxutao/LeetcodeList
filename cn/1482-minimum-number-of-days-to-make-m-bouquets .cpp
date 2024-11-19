#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(vector<int>&v, int m, int k,int n){
        int cnt,pos=0,i,ans=0;
        while (pos<v.size()){
            cnt=0;
            for (i = 0; cnt < k && pos+i<v.size(); ++i) {
                if (v[pos+i]<=n)
                    cnt++;
                else
                    cnt=0;
            }
            if (cnt==k) {
                ans++;
                if (ans==m)
                    return true;
            }
            pos+=i;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size()/k<m)
            return -1;
        int l=1,r=*max_element(bloomDay.begin(), bloomDay.end())+1,ans=INT_MAX;
        while (l<r){
            int middle=(l+r)>>1;
            if (check(bloomDay,m,k,middle)){
                r=middle;
                ans= min(ans,middle);
            }else{
                l=middle+1;
            }
        }
        if (ans==INT_MAX)
            ans=l;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,10,2,9,3,8,4,7,5,6};
    Solution().minDays(v,4,2);
    return 0;
}