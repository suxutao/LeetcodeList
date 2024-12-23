#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getTriggerTime(vector<vector<int>>& increase, vector<vector<int>>& requirements) {
        int n=increase.size(),rn=requirements.size();
        vector<int>ans(rn,-1);
        vector<array<int,3>>pre(n);
        pre[0]={increase[0][0],increase[0][1],increase[0][2]};
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < 3; ++j) {
                pre[i][j]=increase[i][j]+pre[i-1][j];
            }
        }
        auto check=[&](array<int,3>arr,int mid)->bool{
            return pre[mid][0]>=arr[0]&&pre[mid][1]>=arr[1]&&pre[mid][2]>=arr[2];
        };
        for (int i = 0; i < rn; ++i) {
            int a=requirements[i][0],b=requirements[i][1],c=requirements[i][2];
            if (a>pre[n-1][0]||b>pre[n-1][1]||c>pre[n-1][2])
                continue;
            if (a==0&&b==0&&c==0){
                ans[i]=0;
                continue;
            }
            int l=0,r=n;
            while (l<r){
                int mid=(l+r)>>1;
                if (!check({a,b,c},mid)){
                    l=mid+1;
                }else{
                    r=mid;
                }
            }
            ans[i]=l+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}