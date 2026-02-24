#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int ans=0;
        unordered_map<string,int>m;
        for (auto &i: words){
            if (i.size()>=k){
                m[i.substr(0,k)]++;
            }
        }
        for (auto &[_,a]: m){
            ans+=a>1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}