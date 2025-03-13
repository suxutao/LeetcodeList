#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n=sequence.size(),nw=word.size();
        int l=0,r=n/nw+1;
        auto check=[&](int n){
            string s;
            for (int i = 0; i < n; ++i) {
                s+=word;
            }
            return sequence.find(s)!=string::npos;
        };
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}