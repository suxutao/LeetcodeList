#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        vector<int>v(temperatures.size());
        for (int i = temperatures.size()-1; i >= 0; --i) {
            while (!s.empty()&&temperatures[i]>=temperatures[s.top()]){
                s.pop();
            }
            if (s.empty())
                v[i]=0;
            else
                v[i]=s.top()-i;
            s.push(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}