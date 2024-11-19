#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int ans=0,l=0,r=0,n=fruits.size();
        while (r<n){
            ++m[fruits[r]];
            while (m.size()>2){
                --m[fruits[l++]];
                if (!m[fruits[l-1]])
                    m.erase(fruits[l-1]);
            }
            ans= max(ans,r-l+1);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}