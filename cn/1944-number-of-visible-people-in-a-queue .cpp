#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>s;
        vector<int>v(heights.size(),0);
        int count;
        s.push(heights[heights.size()-1]);
        for (int i=heights.size()-2;i>=0;i--){
            count=1;
            while (!s.empty()&&s.top()<heights[i]){
                if (s.top()!=heights[heights.size()-1]&&s.size()!=1)
                    count++;
                s.pop();
            }
            v[i]=count;
            s.push(heights[i]);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}