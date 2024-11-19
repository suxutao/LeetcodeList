#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDeletions(string word, int k) {
        int n=word.size(),ans=0;
        unordered_map<char,int>m;
        vector<int>v;
        for (auto &item: word)
            m[item]++;
        for (auto &[a,b]: m){
            v.push_back(b);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            int pos=upper_bound(v.begin(), v.end(),v[i]+k)-v.begin(),sum=0;
            for (int j = i; j < pos; ++j) {
                sum+=v[j];
            }
            sum+=(v[i]+k)*(v.size()-pos);
            ans= max(ans,sum);
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().minimumDeletions("dabdcbdcdcd",2);
    return 0;
}