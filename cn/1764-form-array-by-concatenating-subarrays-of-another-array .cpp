#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int p=0,n=nums.size();
        for (auto &i: groups){
            if (p>=n)
                return false;
            for (int j = p; j < n; ++j) {
                if (j+i.size()>n)
                    return false;
                int b=true;
                for (int k = 0; k < i.size(); ++k) {
                    if (i[k]!=nums[j+k]){
                        b= false;
                        break;
                    }
                }
                if (b){
                    p=j+i.size();
                    break;
                }else{
                    p=j+1;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}