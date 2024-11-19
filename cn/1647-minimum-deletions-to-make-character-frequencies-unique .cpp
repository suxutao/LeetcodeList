#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        vector<int>v;
        int ans=0;
        for (auto &i: s){
            ++m[i];
        }
        for (auto &i: m){
            v.push_back(i.second);
        }
        sort(v.begin(), v.end(),greater<>());
        for (int i = 1; i < v.size(); ++i) {
            if (v[i-1]==0){
                ans+=v[i];
                v[i]=0;
            }else if (v[i]>=v[i-1]){
                ans+=v[i]-v[i-1]+1;
                v[i]=v[i-1]-1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}