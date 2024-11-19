#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>v;
        priority_queue<int,vector<int>,greater<>>q(nums.begin(),nums.end());
        while (!q.empty()){
            int a=q.top();q.pop();
            int b=q.top();q.pop();
            v.push_back(b);v.push_back(a);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}