#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        std::sort(satisfaction.begin(), satisfaction.end());
        int sum=0,pos=0,basic=0;
        for (int i = n-1; i >= 0; --i) {
            if (satisfaction[i]>0)
                sum+=satisfaction[i];
            else {
                pos=i+1;
                break;
            }
        }
        for (int i = pos; i < n; ++i) {
            basic+=(i-pos+1)*satisfaction[i];
        }
        if (pos==0)
            return basic;
        for (int i = pos-1; i >= 0; --i) {
            if (satisfaction[i]+sum<0)
                break;
            sum+=satisfaction[i];
            basic+=sum;
        }
        return basic;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}