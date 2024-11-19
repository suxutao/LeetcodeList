#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        vector<long long>v(candiesCount.size()+1);
        vector<bool>ans(queries.size());
        for (int i = 1; i < v.size(); ++i) {
            v[i]=v[i-1]+candiesCount[i-1];
        }
        for (int i = 0; i < ans.size(); ++i) {
            long long a=queries[i][0],b=queries[i][1]+1,c=queries[i][2];
            if (b*c>v[a]&&b<=v[a+1])
                ans[i]=true;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}