#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for (int i = 1; i <= n; ++i) {
            if (i%3&&i%5)
                ans.push_back(to_string(i));
            else if (i%3||i%5){
                if (i%3)
                    ans.push_back("Buzz");
                else
                    ans.push_back("Fizz");
            }
            else
                ans.push_back("FizzBuzz");
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}