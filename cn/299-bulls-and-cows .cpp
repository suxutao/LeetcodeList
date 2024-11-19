#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0,b=0;
        int arr[10]={0};
        vector<bool>v(secret.size(),0);
        for (auto &item: secret){
            arr[item-'0']++;
        }
        for (int i = 0; i < guess.size(); ++i) {
            if (secret[i]==guess[i]){
                v[i]=1;
                a++;
                arr[guess[i]-'0']--;
            }
        }
        for (int i = 0; i < guess.size(); ++i) {
            if (arr[guess[i]-'0']&&!v[i]){
                arr[guess[i]-'0']--;
                b++;
            }
        }
        string s=to_string(a)+"A"+to_string(b)+"B";
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}