#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr['z'+1]{};
    int mei(){
        int mx=1,mn=500;
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]){
                mx= max(mx,arr[i]);
                mn= min(mn,arr[i]);
            }
        }
        return mx-mn;
    }
    int beautySum(string s) {
        int n=s.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            memset(arr,0,sizeof arr);
            for (int j = i; j < n; ++j) {
                arr[s[j]]++;
                ans+=mei();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}