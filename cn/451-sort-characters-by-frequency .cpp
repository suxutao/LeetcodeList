#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string frequencySort(string s) {
        int arr[CHAR_MAX]={0};
        string ans;
        vector<pair<int,char>>v;
        for (int i = 0; i < s.length(); ++i) {
            arr[s[i]]++;
        }
        for (int i = 0; i < CHAR_MAX; ++i) {
            if (arr[i])
                v.push_back({arr[i],i});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 0; j < v[i].first; ++j) {
                ans+=v[i].second;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}