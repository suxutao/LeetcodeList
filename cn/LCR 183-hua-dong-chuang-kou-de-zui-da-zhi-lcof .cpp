#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxAltitude(vector<int>& heights, int limit) {
        deque<int>d;
        vector<int>v;
        for (int i = 0; i < heights.size(); ++i) {
            while (!d.empty()&&heights[d.back()]<heights[i])
                d.pop_back();
            d.push_back(i);
            if (i>=limit-1){
                while (!d.empty()&&d.front()<=i-limit)
                    d.pop_front();
                v.push_back(heights[d.front()]);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}