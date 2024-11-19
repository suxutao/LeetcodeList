#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=13131;
    int distinctEchoSubstrings(string text) {
        int n=text.size();
        unordered_set<ull>s;
        vector<vector<ull>>v(n,vector<ull>(n));
        for (int i = 0; i < n; ++i) {
            ull t=0;
            for (int j = i; j < n; ++j) {
                t=t*P+text[j];
                v[i][j]=t;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if ((j-i)&1){
                    if (v[i][i+(j-i+1)/2-1]==v[i+(j-i+1)/2][j]){
                        s.insert(v[i][i+(j-i+1)/2]);
                    }
                }
            }
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}