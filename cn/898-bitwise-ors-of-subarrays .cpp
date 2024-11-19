#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>s(arr.begin(),arr.end());
        for (int i = 0; i < n; ++i) {
            for (int j = i-1; j>=0&&(arr[i]|arr[j])!=arr[j]; --j) {
                arr[j]|=arr[i];
                s.insert(arr[j]);
            }
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}