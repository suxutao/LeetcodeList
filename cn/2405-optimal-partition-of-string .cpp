#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int partitionString(string s) {
        int ans=0;
        unordered_map<char,int>m;
        for (char i:s) {
            if (m[i]){
                m.clear();
                m[i]++;
                ans++;
            }else{
                m[i]++;
            }
        }
        return ans+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}