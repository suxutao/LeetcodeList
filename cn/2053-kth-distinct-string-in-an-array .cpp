#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        int cnt=0;
        for (auto &item: arr)
            ++m[item];
        for (int i = 0; i < arr.size(); ++i) {
            if (m[arr[i]]==1)
                cnt++;
            if (cnt==k)
                return arr[i];
        }
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}