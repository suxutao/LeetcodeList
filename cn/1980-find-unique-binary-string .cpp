#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string bit2str(int x,int n){
        string ans(n,'0');
        for (int i = 0; i < n; ++i) {
            if (x>>i&1)
                ans[n-i-1]='1';
        }
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string>s(nums.begin(),nums.end());
        for (int i = 0; i < 1 << n; ++i) {
            string t= bit2str(i,n);
            if (!s.contains(t))
                return t;
        }
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}