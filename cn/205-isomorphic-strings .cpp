#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[INT16_MAX+1][2]={0};
        int arr2[INT16_MAX+1][2]={0};
        for (int i = 0; i < s.length(); ++i) {
            if (arr1[s[i]][0]!=arr2[t[i]][0])
                return false;
            if (!arr1[s[i]][1])
                arr1[s[i]][1]=t[i];
            if (!arr2[t[i]][1])
                arr2[t[i]][1]=s[i];
            if (arr1[s[i]][1]!=t[i]||arr2[t[i]][1]!=s[i])
                return false;
            arr1[s[i]][0]++;
            arr2[t[i]][0]++;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}