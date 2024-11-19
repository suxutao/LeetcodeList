#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int>q;
        int ans=0,jian=0;
        for (int i:nums) {
            if (i)
                q.push(i);
        }
        while (!q.empty()){
            int temp=q.top();
            q.pop();
            if (jian!=temp){
                jian=temp;
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}