#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shu(int n){
        int temp=0;
        while (n){
            temp= max(temp,n%10);
            n/=10;
        }
        return temp;
    }
    int maxSum(vector<int>& nums) {
        int ans=-1;
        unordered_map<int,int>m;
        for (auto &i: nums){
            int j= shu(i);
            if (m[j]) {
                ans = max(ans, m[j] + i);
                m[j]= max(m[j],i);
            }else{
                m[j]=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}