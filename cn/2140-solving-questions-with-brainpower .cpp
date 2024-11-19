#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<long long>v;
    long long mostPoints(vector<vector<int>>& questions) {
        v.resize(questions.size());
        v[v.size()-1]=questions[v.size()-1][0];
        for (int i = v.size()-2; i >= 0 ; --i){
            if (i+questions[i][1]+1>=v.size())
                v[i]= max((long long)questions[i][0],v[i+1]);
            else
                v[i]= max(v[i+1],questions[i][0]+v[i+questions[i][1]+1]);
        }
        return v[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}