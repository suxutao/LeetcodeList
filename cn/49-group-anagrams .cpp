#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v(strs.begin(),strs.end());
        unordered_map<string,int>m;
        vector<vector<string>>vvs;
        int a=1;
        for_each(v.begin(), v.end(),[](string&s){
            sort(s.begin(), s.end());
        });
        for (int i = 0; i < strs.size(); ++i) {
            if (m[v[i]]){
                vvs[m[v[i]]-1].push_back(strs[i]);
            }else{
                m[v[i]]=a++;
                vvs.push_back({strs[i]});
            }
        }
        return vvs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}