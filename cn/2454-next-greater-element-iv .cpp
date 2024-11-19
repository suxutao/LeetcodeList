#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        stack<int>s;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int, int>>>q;
        for (int i = 0; i < nums.size(); ++i) {
            while(!q.empty()&&q.top().first<nums[i]){
                v[q.top().second]=nums[i];
                q.pop();
            }
            while (!s.empty()&&nums[s.top()]<nums[i]){
                q.push({nums[s.top()],s.top()});
                s.pop();
            }
            s.push(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}