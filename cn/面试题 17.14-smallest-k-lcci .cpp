#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<>>q;
        for (auto &item: arr)
            q.push(item);
        for (int i = 0; i < k; ++i) {
            ans.push_back(q.top());
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}