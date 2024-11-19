#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>m;
        for (int i = 0; i < order.size(); ++i) {
            m[order[i]]=i+1;
        }
        std::sort(s.begin(), s.end(),[&](char&a,char&b){
            return m[a]<m[b];
        });
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}