#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool cmp(string&a,string&b){
        if (a.size()!=b.size())
            return false;
        int cnt=0;
        for (int i = 0; i < a.size(); ++i) {
            cnt+=a[i]!=b[i];
            if (cnt>1)
                return false;
        }
        return cnt;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size();
        vector<string>vs;
        vector<pair<string,int>>pre(n, make_pair("",-1));
        vector<int>dp(n,1);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i]!=groups[j]&&cmp(words[i],words[j])){
                    if (dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        pre[i]= {words[j],j};
                    }
                }
            }
        }
        int pos=max_element(dp.begin(), dp.end())-dp.begin();
        do{
            vs.push_back(words[pos]);
            pos=pre[pos].second;
        }while (~pos);
        reverse(vs.begin(), vs.end());
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>vs{"bab","dab","cab"};
    vector<int>v{1,2,2};
    Solution().getWordsInLongestSubsequence(vs,v);
    return 0;
}