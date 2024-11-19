#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        heights.insert(heights.begin(), 0);
        heights.push_back(0);
        s.push(0);
        int ans = 0;
        for (int i = 1; i < heights.size(); i++) {
            while (heights[i] < heights[s.top()]) {
                int mid = s.top();
                s.pop();
                int w = i - s.top() - 1;
                int h = heights[mid];
                ans = max(ans, w * h);
            }
            s.push(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}