#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m1;
        unordered_map<string,int>m2;
        int ans=0;
        for (const auto &item: words1){
            m1[item]++;
        }
        for (const auto &item: words2){
            m2[item]++;
        }
        for (const auto &item: m1){
            if (item.second==1&&m2[item.first]==1)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}