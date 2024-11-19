#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> a;
    vector<int> b;
    bool uniqueOccurrences(vector<int>& arr) {
        a.assign(2001,0);
        b.assign(1001,0);
        for (int i = 0; i < arr.size(); ++i) {
            a[arr[i]+1000]++;
        }
        for (int i = 0; i < a.size(); ++i) {
            if (!a[i])
                continue;
            if (a[i]&&!b[a[i]])
                b[a[i]]=1;
            else
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}