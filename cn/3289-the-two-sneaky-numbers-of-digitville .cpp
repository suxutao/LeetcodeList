#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for (auto &item: nums)
            ++m[item];
        for (auto &item: m){
            if (item.second==2)
                v.push_back(item.first);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}