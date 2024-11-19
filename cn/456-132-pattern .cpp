#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size()<3)
            return false;
        int n=nums.size();
        stack<int>st;
        vector<int>MIN(n,INT_MAX),v(n,-1);MIN[0]=nums[0];
        for (int i = 0; i < n; ++i) {
            if(i) MIN[i]= min(MIN[i-1],nums[i]);
            while (!st.empty()&&nums[st.top()]<=nums[i])
                st.pop();
            if (!st.empty())
                v[i]=st.top();
            st.push(i);
        }
        for (int i = 2; i < n; ++i) {
            if (v[i]==-1||v[i]==0)
                continue;
            if (nums[i]>MIN[v[i]-1])
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}