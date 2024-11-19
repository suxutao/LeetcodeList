#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    int minimumRounds(vector<int>& tasks) {
        int ans=0;
        for (auto &item: tasks){
            m[item]++;
        }
        for (auto &item: m){
            if (item.second==1)
                return -1;
            ans+= ceil(item.second/3.);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}