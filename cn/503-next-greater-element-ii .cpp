#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v(2*nums.size());
        vector<int>Nums(nums.begin(),nums.end());
        Nums.insert(Nums.end(),nums.begin(),nums.end());
        stack<int>s;
        for (int i = Nums.size()-1; i >=0 ; --i) {
            while (!s.empty()&&s.top()<=Nums[i])
                s.pop();
            if (s.empty())
                v[i]=-1;
            else
                v[i]=s.top();
            s.push(Nums[i]);
        }
        v.resize(nums.size());
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,2,1};
    Solution().nextGreaterElements(v);
    return 0;
}