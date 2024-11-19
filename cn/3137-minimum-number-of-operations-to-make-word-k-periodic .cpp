#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int>m;
        int cnt=word.size()/k,MAX=0;
        for (int i = 0; i < word.size(); i+=k) {
            ++m[word.substr(i,k)];
        }
        for (auto &[_,a]: m){
            MAX= max(MAX,a);
        }
        return cnt-MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}