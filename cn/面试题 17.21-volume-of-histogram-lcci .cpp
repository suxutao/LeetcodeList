#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    stack<int>s;
    int trap(vector<int>& height) {
        int ans=0;
        for (int i = 0; i < height.size(); ++i) {
            while (!s.empty()&&height[s.top()]<height[i]){
                int top=s.top();
                s.pop();
                if (s.empty()){
                    break;
                }
                ans+=(min(height[s.top()],height[i])-height[top])*(i-s.top()-1);
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