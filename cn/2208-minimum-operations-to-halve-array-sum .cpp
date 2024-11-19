#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int halveArray(vector<int>& nums) {
        int ans=0;
        double sum=accumulate(nums.begin(), nums.end(),0ll),n=0;
        priority_queue<double>q(nums.begin(),nums.end());
        while (n<sum/2){
            double temp=q.top();
            q.pop();
            n+=temp/2;
            q.push(temp/2);
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}