#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int pa=n,pb=0,p=0;
        for (int i = m-1; i >= 0; --i) {
            A[i+n]=A[i];
        }
        while (pa<m+n&&pb<n){
            if (A[pa]<=B[pb]){
                A[p++]=A[pa++];
            }else{
                A[p++]=B[pb++];
            }
        }
        while (pb<n){
            A[p++]=B[pb++];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}