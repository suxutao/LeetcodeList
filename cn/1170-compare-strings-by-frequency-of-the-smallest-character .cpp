#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int count(string&s){
        map<char,int>m;
        for (auto &item: s){
            m[item]++;
        }
        return m.begin()->second;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>v(queries.size()),c(words.size());
        for (int i = 0; i < c.size(); ++i) {
            c[i]= count(words[i]);
        }
        std::sort(c.begin(), c.end(),greater<>());
        for (int i = 0; i < v.size(); ++i) {
            auto a= lower_bound(c.begin(), c.end(), count(queries[i]),greater<>());
            v[i]=a-c.begin();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}