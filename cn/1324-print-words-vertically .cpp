#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> printVertically(string s) {
        int l=1;
        string temp;
        stringstream ss(s);
        vector<string>ans,v;
        while (getline(ss,temp,' ')){
            v.push_back(temp);
            l= max<int>(l,temp.size());
        }
        ans.assign(l,string(v.size(),' '));
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < v.size(); ++j) {
                if (i<v[j].size()){
                    ans[i][j]=v[j][i];
                }
            }
            while (ans[i].back()==' ')
                ans[i].pop_back();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}