#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>st;
        vector<ll>v(arr.size());
        for (int i = 0; i < arr.size(); ++i) {
            while (!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }
            if (st.empty()) {
                v[i]=arr[i]*(i+1);
            }else {
                v[i]=arr[i]*(i-st.top())+v[st.top()];
            }
            st.push(i);
        }
        return accumulate(v.begin(), v.end(),0ll)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}