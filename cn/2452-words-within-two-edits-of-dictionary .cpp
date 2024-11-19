#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cmp(string&a,string&b){
        int ret=0;
        for (int i = 0; i < a.size(); ++i) {
            ret+=a[i]!=b[i];
        }
        return ret;
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size(),m=dictionary.size();
        vector<string>ans;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (cmp(queries[i],dictionary[j])<=2){
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v1{"yes"},v2{"not"};
    Solution().twoEditWords(v1,v2);
    return 0;
}