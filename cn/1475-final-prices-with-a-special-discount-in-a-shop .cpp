#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans(n);
        stack<int>s;
        for (int i=n-1;i>=0;--i){
            while (!s.empty()&&prices[s.top()]> prices[i]){
                s.pop();
            }
            if (s.empty())
                ans[i]=prices[i];
            else
                ans[i]=prices[i]-prices[s.top()];
            s.push(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}