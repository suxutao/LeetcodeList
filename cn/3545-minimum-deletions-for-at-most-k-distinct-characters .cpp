#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDeletion(string s, int k) {
        int arr['z'+1]{},ans=0;
        vector<int>v;
        for (int i = 0; i < s.size(); ++i) {
            ++arr[s[i]];
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i])
                v.push_back(arr[i]);
        }
        ranges::sort(v);
        if (v.size()<k)
            return 0;
        for (int i = 0; i < v.size() - k; ++i) {
            ans+=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}