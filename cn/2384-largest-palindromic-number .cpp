#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestPalindromic(string num) {
        int arr[10]{};
        deque<char>d;
        for (auto &i: num){
            arr[i-'0']++;
        }
        for (int i = 9; i >= 0; --i) {
            if (arr[i]&1){
                d.push_back(i+'0');
                break;
            }
        }
        for (int i = 0; i < 10; ++i) {
            while (arr[i]>=2){
                d.push_front(i+'0');
                d.push_back(i+'0');
                arr[i]-=2;
            }
        }
        if (d.front()=='0'){
            return string(1,d[d.size()/2]);
        }
        return string(d.begin(),d.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}