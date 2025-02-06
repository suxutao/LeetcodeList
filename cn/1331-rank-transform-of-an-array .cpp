#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty())
            return arr;
        int n=arr.size(),cnt=1;
        vector<int>ans(n);
        vector<array<int,2>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={arr[i],i};
        }
        sort(v.begin(), v.end());
        ans[v[0][1]]=1;
        for (int i = 1; i < n; ++i) {
            if (v[i][0]==v[i-1][0]){
                ans[v[i][1]]=cnt;
            }else{
                ans[v[i][1]]=++cnt;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}