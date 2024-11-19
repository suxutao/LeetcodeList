#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int,int>m;
        for (auto &i: nums)
            ++m[i];
        priority_queue<int>q;
        for (auto &[_,a]: m){
            q.push(a);
        }
        while (q.size()>1){
            int a=q.top();q.pop();
            int b=q.top();q.pop();
            --a;--b;
            if (a)q.push(a);
            if (b)q.push(b);
        }
        return q.empty()?0:q.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}