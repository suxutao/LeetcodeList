#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>s;
    int numRabbits(vector<int>& answers) {
        int ans=0;
        for (auto &item: answers){
            if (item)
                s[item+1]++;
            else
                ans++;
        }
        for (auto &i: s){
            ans+= ceil((double)i.second/i.first)*i.first;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}