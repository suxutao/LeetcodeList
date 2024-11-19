#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string simplifyPath(string path) {
        vector<string>v;
        string ans,t;
        stringstream ss(path);
        while (getline(ss,t,'/')){
            if (!t.empty()&&t!="."){
                if (t=="..") {
                    if (!v.empty())
                        v.pop_back();
                }else
                    v.push_back(t);
            }
        }
        for (int i = 0; i < v.size(); ++i) {
            ans+="/"+v[i];
        }
        if (ans.empty())
            ans="/";
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}