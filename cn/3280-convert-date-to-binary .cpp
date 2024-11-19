#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string tobin(string&s){
        string ans;
        int n= stoi(s);
        while (n){
            ans.push_back((n&1)+'0');
            n>>=1;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        stringstream ss(date);
        string temp,ans;
        while (getline(ss,temp,'-')){
            ans+=tobin(temp);
            ans.push_back('-');
        }
        ans.pop_back();
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}