#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    priority_queue<int,vector<int>,greater<>>q1,q2;
    long long totalCost(vector<int>& costs, int k, int candidates) {
        ll ans=0,n=costs.size();
        if (candidates*2>=costs.size()){
            std::sort(costs.begin(), costs.end());
            for (int i = 0; i < k; ++i) {
                ans+= costs[i];
            }
        }else{
            int l=candidates,r=n-candidates-1;
            for (int i = 0; i < candidates; ++i) {
                q1.emplace(costs[i]);
                q2.emplace(costs[n-i-1]);
            }
            while (k--){
                if (!q1.empty()&&!q2.empty()){
                    if (q1.top()<=q2.top()){
                        ans+=q1.top();
                        q1.pop();
                        if (l<=r)
                            q1.emplace(costs[l++]);
                    }else{
                        ans+=q2.top();
                        q2.pop();
                        if (l<=r)
                            q2.emplace(costs[r--]);
                    }
                }else if (!q1.empty()||!q2.empty()){
                    if (q1.empty()){
                        ans+=q2.top();
                        q2.pop();
                    }else{
                        ans+=q1.top();
                        q1.pop();
                    }
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