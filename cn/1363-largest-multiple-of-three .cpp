#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    int cnt[10],sum;
    string ans = "";
    int del(int m)
    {
        for(int i=m;i<=9;i+=3)if(cnt[i]){cnt[i]--;return 1;}
        return 0;
    }
public:
    string largestMultipleOfThree(vector<int>& d) {
        for(auto x:d)cnt[x]++,sum+=x;
        if(sum%3==1)if(!del(1))del(2),del(2);
        if(sum%3==2)if(!del(2))del(1),del(1);
        for(int i=9;i>=0;i--)while(cnt[i]--)ans+=i+'0';
        if(ans.size() && ans[0] == '0') return "0";
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{8,6,7,1,0};
    Solution().largestMultipleOfThree(v);
    return 0;
}