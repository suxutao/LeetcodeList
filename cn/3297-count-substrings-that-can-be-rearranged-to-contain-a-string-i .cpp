#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll arr['z'+1]{};
    long long validSubstringCount(string word1, string word2) {
        ll n=word2.size(),l=0,less=0,ans=0;
        for (int i = 0; i < n; ++i) {
            ++arr[word2[i]];
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            less+=arr[i]>0;
        }
        for (auto &c: word1){
            --arr[c];
            if (arr[c]==0){
                --less;
            }
            while (less==0){
                char obj=word1[l++];
                if (arr[obj]==0){
                    ++less;
                }
                arr[obj]++;
            }
            ans+=l;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}