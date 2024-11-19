#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st;
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            if (!st.empty()&&st.back().first==s[i]){
                if (st.back().second==k-1){
                    st.pop_back();
                }else{
                    st.back().second++;
                }
            }else{
                st.push_back({s[i],1});
            }
        }
        for (auto &[a,_]: st)
            ans.append(_,a);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}