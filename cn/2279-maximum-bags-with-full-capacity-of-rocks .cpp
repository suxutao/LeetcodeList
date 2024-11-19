#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=0;
        priority_queue<int,vector<int>,greater<>>q;
        for (int i = 0; i < rocks.size(); ++i) {
            capacity[i]-=rocks[i];
            if (capacity[i])
                q.push(capacity[i]);
            else
                ++ans;
        }
        while (!q.empty()&&additionalRocks>=q.top()){
            additionalRocks-=q.top();
            q.pop();
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}