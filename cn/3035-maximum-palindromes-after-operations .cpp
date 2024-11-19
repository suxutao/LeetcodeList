#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        int arr['z'+1]{},n=words.size(),ans=0,dan=0,sum=0;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            for (auto &j: words[i]){
                arr[j]++;
            }
            v[i]=words[i].size();
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]&1) {
                sum+=arr[i]-1;
                dan++;
            }else
                sum+=arr[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            if (v[i]&1){
                if (dan){
                    if (sum<v[i]-1)
                        break;
                    sum-=v[i]-1;
                    dan--;
                }else{
                    if (sum<v[i])
                        break;
                    sum-=v[i];
                }
            }else{
                if (sum<v[i])
                    break;
                sum-=v[i];
            }
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}