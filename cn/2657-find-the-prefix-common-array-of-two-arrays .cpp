#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>v(A.size());
        unordered_map<int,int>m;
        for (int i = 0; i < v.size(); ++i) {
            int a=0;
            m[A[i]]=1;
            for (int j = 0; j <= i; ++j) {
                if (m[B[j]])
                    a++;
            }
            v[i]=a;
        }

        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}