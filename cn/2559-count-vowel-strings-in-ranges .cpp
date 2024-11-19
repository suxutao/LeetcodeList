#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>v(queries.size()),q(words.size()+1);
        unordered_set<char>s={'a','e','i','o','u'};
        for (int i = 0; i < words.size(); ++i) {
            q[i+1]=q[i]+(s.contains(words[i][0])&&s.contains(words[i].back()));
        }
        for (int i = 0; i < v.size(); ++i) {
            v[i]=q[queries[i][1]+1]-q[queries[i][0]];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}