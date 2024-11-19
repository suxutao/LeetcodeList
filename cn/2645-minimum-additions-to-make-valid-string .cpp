#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int addMinimum(string word) {
        if (word.size()==1)
            return 2;
        int ans=0;
        char qian=word[0];
        if (qian=='b')
            ans=1;
        else if (qian=='c')
            ans=2;
        for (int i = 1; i < word.size(); ++i) {
            if (word[i]=='a'){
                if (qian=='a'){
                    ans+=2;
                }else if (qian=='b'){
                    ans++;
                }
            }else if (word[i]=='b'){
                if (qian=='b'){
                    ans+=2;
                }else if (qian=='c'){
                    ans++;
                }
            }else{
                if (qian=='c'){
                    ans+=2;
                }else if (qian=='a'){
                    ans++;
                }
            }
            qian=word[i];
        }
        if (word[word.size()-1]=='a')
            ans+=2;
        else if (word[word.size()-1]=='b')
            ans++;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}