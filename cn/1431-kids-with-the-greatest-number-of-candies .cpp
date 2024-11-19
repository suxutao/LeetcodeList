#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v(candies.size());
        int MAX=*std::max_element(candies.begin(), candies.end());
        for (int i = 0; i < v.size(); ++i) {
            if (MAX>extraCandies+candies[i])
                v[i]=false;
            else
                v[i]=true;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}