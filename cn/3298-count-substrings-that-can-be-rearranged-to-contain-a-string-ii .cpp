#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll arr['z'+1]{};
    long long validSubstringCount(string word1, string word2) {
        ll n=word2.size(),l=0,less=0,ans=0,r=0;
        for (int i = 0; i < n; ++i) {
            ++arr[word2[i]];
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            less+=arr[i]>0;
        }
        while (r<word1.size()){
            --arr[word1[r]];
            if (arr[word1[r]]==0)
                --less;
            while (less==0){
                if (arr[word1[l]]==0){
                    less++;
                }
                ++arr[word1[l++]];
            }
            ans+=l;
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}