#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    bool pan(int num){
        int temp=num;
        while (num){
            if (num%10==0)
                return false;
            if (temp%(num%10))
                return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        for (int i = left; i <= right; ++i) {
            if (pan(i))
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}