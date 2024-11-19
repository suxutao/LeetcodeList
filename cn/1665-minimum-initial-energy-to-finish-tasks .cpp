#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(),[&](vector<int>&a,vector<int>&b)->bool{
            return a[1]-a[0]>b[1]-b[0];
        });
        int l=1,r=1e9,mid;
        auto check=[&](int x){
            for (auto &i: tasks){
                if (x<i[1])
                    return false;
                x-=i[0];
            }
            return true;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (!check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}