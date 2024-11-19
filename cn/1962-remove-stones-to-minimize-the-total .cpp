#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q(piles.begin(),piles.end());
        int sum=0,temp;
        for (int i = 0; i < k; ++i) {
            temp=q.top()-q.top()/2;
            q.pop();
            q.push(temp);
        }
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}