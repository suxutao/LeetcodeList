#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int halfQuestions(vector<int>& questions) {
        int n=questions.size(),cnt=0,ans=0;
        unordered_map<int,int>m;
        vector<int>v;
        for (auto &i: questions){
            ++m[i];
        }
        for (auto &[a,b]: m){
            v.push_back(b);
        }
        sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < v.size(); ++i) {
            cnt+=v[i];
            ++ans;
            if (cnt>=n/2)
                break;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}