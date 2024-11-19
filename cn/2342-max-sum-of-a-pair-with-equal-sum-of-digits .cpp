#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int f(int u){
        int temp=0;
        while (u){
            temp+=u%10;
            u/=10;
        }
        return temp;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=-1;
        for (auto &i: nums){
            int j= f(i);
            if (m[j])
                ans= max(ans,m[j]+i);
            m[j]= max(m[j],i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}