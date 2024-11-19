#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>v(m+1);
        vector<int>ans;
        for (int i = 1; i <= m; ++i) {
            v[i]=i;
        }
        for (auto &i: queries){
            int pos= find(v.begin()+1, v.end(),i)-v.begin();
            ans.push_back(pos-1);
            for (int j = pos; j > 1; --j) {
                swap(v[j],v[j-1]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}