#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    map<pair<int,int>,ll>m;
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        if (rectangles.size()==1)
            return 0;
        ll ans=0;
        for (auto &i: rectangles){
            int g= gcd(i[0],i[1]);
            m[{i[0]/g,i[1]/g}]++;
        }
        for (auto &item: m){
            ans+=item.second*(item.second-1)/2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}