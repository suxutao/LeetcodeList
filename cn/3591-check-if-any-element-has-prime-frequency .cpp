#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(int x){
        if (x==1)
            return false;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x%i==0)
                return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]];
        }
        for (auto &[_,a]: m){
            if (f(a))
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}