#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m{{'A',0},{'C',1},{'G',2},{'T',3}};
    int mask=(1<<20)-1;
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size(),hash=0;
        vector<string>vs;
        unordered_map<int,int>ma;
        for (int i = 0; i < 10; ++i) {
            hash=(hash<<2|m[s[i]])&mask;
        }
        ++ma[hash];
        for (int i = 10; i < n; ++i) {
            hash=(hash<<2|m[s[i]])&mask;
            if (++ma[hash]==2)
                vs.push_back(s.substr(i-9,10));
        }
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}