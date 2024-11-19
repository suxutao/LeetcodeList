#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string,int>m;
    int findLUSlength(vector<string>& strs) {
        for (auto &i: strs){
            int sz=i.size();
            for (int j = 1; j < 1 << sz; ++j) {
                string s;
                for (int k = j,l=0; k ; k>>=1,++l) {
                    if (k&1)
                        s.push_back(i[l]);
                }
                m[s]++;
            }
        }
        int ans=-1;
        for (auto &i: m){
            if (i.second==1&&(int)i.first.size()>ans){
                ans=i.first.size();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v={"aba","cdc","eae"};
    Solution().findLUSlength(v);
    return 0;
}