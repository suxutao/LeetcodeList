#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>v(n+1);
        for (auto &i: bookings){
            v[i[0]-1]+=i[2];
            v[i[1]]-=i[2];
        }
        for (int i = 1; i < n; ++i) {
            v[i]+=v[i-1];
        }
        v.pop_back();
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}