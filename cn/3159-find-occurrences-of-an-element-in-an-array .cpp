#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>pos,v(queries.size(),-1);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==x)
                pos.push_back(i);
        }
        for (int i = 0; i < v.size(); ++i) {
            if (queries[i]<=pos.size())
                v[i]=pos[queries[i]-1];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}