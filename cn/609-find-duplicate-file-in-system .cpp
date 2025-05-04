#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        string t,root;
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for (auto &path: paths){
            int cnt=1;
            stringstream ss(path);
            while (getline(ss,t,' ')){
                if (cnt==1)
                    root=t;
                else{
                    for (int i = 0; i < t.size(); ++i) {
                        if (t[i]=='('){
                            m[t.substr(i)].push_back(root+"/"+t.substr(0,i));
                        }
                    }
                }
                ++cnt;
            }
        }
        for (auto &[_,a]: m){
            if (a.size()>1)
                ans.push_back(a);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}