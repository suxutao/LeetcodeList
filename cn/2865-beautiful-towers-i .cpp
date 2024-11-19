#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        if (maxHeights.size()==1)
            return maxHeights[0];
        long long ans=0;
        vector<long long>l(maxHeights.size(),0);
        vector<long long>r(maxHeights.size(),0);
        stack<long long>L;
        stack<long long>R;
        for (int i = 0; i < maxHeights.size(); ++i) {
            while (!L.empty()&&maxHeights[L.top()]>maxHeights[i]){
                L.pop();
            }
            if (!L.empty())
                l[i]=l[L.top()]+(long long)(i-L.top())*maxHeights[i];
            else
                l[i]=(long long)(i+1) * maxHeights[i];
            L.push(i);
        }
        for (int i = maxHeights.size()-1; i >= 0; --i) {
            while (!R.empty()&&maxHeights[R.top()]>maxHeights[i]){
                R.pop();
            }
            if (!R.empty())
                r[i]=r[R.top()]+(long long)(R.top()-i)*maxHeights[i];
            else
                r[i]=(long long)(maxHeights.size() - i) * maxHeights[i];
            R.push(i);
        }
        for (int i = 0; i < maxHeights.size(); ++i) {
            ans= max(ans,l[i]+r[i]-maxHeights[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}