#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v(heights.size());
        for (int i = 0; i < names.size(); ++i) {
            v[i]={heights[i],names[i]};
        }
        std::sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < v.size(); ++i) {
            names[i]=v[i].second;
        }
        return names;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}