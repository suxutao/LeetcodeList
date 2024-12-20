#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minAnagramLength(string s) {
        int n=s.size();
        vector<int>v;
        for (int i = 1; i <= n / 2 + 1; ++i) {
            if (n%i==0)
                v.push_back(i);
        }
        auto check=[&](int k)->bool{
            string sk=s.substr(0,k);
            unordered_multiset<char>se(sk.begin(),sk.end());
            for (int i = k; i < n; i+=k) {
                unordered_multiset<char>t(s.begin()+i,s.begin()+i+k);
                if (t!=se)
                    return false;
            }
            return true;
        };
        for (int i : v) {
            if (check(i))
                return i;
        }
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().minAnagramLength("abbbaa");
    return 0;
}