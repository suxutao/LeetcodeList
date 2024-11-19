#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>,less<>>q(stones.begin(),stones.end());
        while(q.size()>=2){
            int a=q.top();q.pop();
            int b=q.top();q.pop();
            if (a!=b)
                q.push(abs(a-b));
        }
        if (q.empty())
            return 0;
        else
            return q.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}