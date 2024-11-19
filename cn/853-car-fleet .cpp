#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size(),ans=0;
        vector<pair<int,double>>v(n);
        stack<double>st;
        for (int i = 0; i < n; ++i) {
            v[i]={position[i],(target-position[i])/(double)speed[i]};
        }
        sort(v.begin(), v.end());
        for (int i = n-1; i >= 0; --i) {
            while (!st.empty()&&st.top()<v[i].second){
                st.pop();
            }
            ans+=st.empty();
            st.push(v[i].second);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}