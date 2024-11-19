#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int bits(int x){
        int ans=0;
        while (x){
            x=x&(x-1);
            ++ans;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(),[](int&a,int&b){
            int A=__builtin_popcount(a),B= __builtin_popcount(b);
            if (A==B)
                return a<b;
            return A<B;
        });
        return arr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}