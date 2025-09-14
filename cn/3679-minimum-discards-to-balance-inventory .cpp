#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int n=arrivals.size(),ans=0;
        unordered_map<int,int>ma;
        vector<bool>del(n);
        for (int i = 0; i < w; ++i) {
            if (ma[arrivals[i]]==m){
                ans++;
                del[i]=1;
            }else{
                ma[arrivals[i]]++;
            }
        }
        for (int i = w; i < n; ++i) {
            if (!del[i-w])
                --ma[arrivals[i-w]];
            if (ma[arrivals[i]]==m){
                ans++;
                del[i]=1;
            }else{
                ma[arrivals[i]]++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}