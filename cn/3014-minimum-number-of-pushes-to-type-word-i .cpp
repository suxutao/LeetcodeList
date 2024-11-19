#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        map<char,int>m;
        vector<int>v;
        for (int i = 0; i < word.size(); ++i) {
            m[word[i]]++;
        }
        for (auto &item: m){
            v.push_back(item.second);
        }
        sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < v.size(); ++i) {
            ans+=v[i]*(i/8+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}