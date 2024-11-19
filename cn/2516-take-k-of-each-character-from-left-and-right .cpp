#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int takeCharacters(string s, int k) {
        int arr[3]={},n=s.size();
        for (int i = 0; i < n; ++i) {
            ++arr[s[i]-'a'];
        }
        if (arr[0]<k||arr[2]<k||arr[1]<k)
            return -1;
        for (auto &i: arr)
            i-=k;
        int ans=0,l=0,r=0;
        while (r<n){
            --arr[s[r]-'a'];
            while (arr[s[r]-'a']<0)
                ++arr[s[l++]-'a'];
            ans= max(ans,r-l+1);
            ++r;
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}