#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vs(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            vs[i]=to_string(nums[i]);
        }
        string ans;
        sort(vs.begin(), vs.end(),[&](string&a,string&b){
            int n= min(a.size(),b.size());
            for (int i = 0; i < n; ++i) {
                if (a[i]<b[i]){
                    return false;
                }else if (a[i]>b[i]){
                    return true;
                }
            }
            return a+b>b+a;
        });
        for (auto &i: vs){
            ans+=i;
        }
        return ans[0]=='0'?"0":ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}