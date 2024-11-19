#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isdig(string s){
        for (int i = 0; i < s.size(); ++i) {
            if (!isdigit(s[i]))
                return false;
        }
        return true;
    }
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string temp;
        int num=0;
        while (getline(ss,temp,' ')){
            if (isdig(temp)){
                int n=stoi(temp);
                if (n<=num)
                    return false;
                num=n;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}