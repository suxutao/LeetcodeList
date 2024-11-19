#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m1,m2;
    int minNumBooths(vector<string>& demand) {
        int ans=0;
        for (const auto &item: demand){
            m1.clear();
            for (auto &i: item){
                m1[i]++;
            }
            for (auto &i: m1){
                if (m2[i.first]<i.second)
                    m2[i.first]=i.second;
            }
        }
        for (const auto &item: m2){
            ans+=item.second;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}