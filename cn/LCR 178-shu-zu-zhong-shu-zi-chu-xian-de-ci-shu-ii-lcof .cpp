#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int trainingPlan(vector<int>& actions) {
        unordered_map<int,int>m;
        for (auto &item: actions){
            m[item]++;
        }
        for (auto &item: m){
            if (item.second==1)
                return item.first;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}