#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addBinary(string a, string b) {
        int na=a.size(),nb=b.size(),jin=0;
        if (na>nb){
            swap(a,b);
            swap(na,nb);
        }
        string ans(nb+1,'0');
        ranges::reverse(a);
        ranges::reverse(b);
        a+=string(nb-na,'0');
        for (int i = 0; i < nb; ++i) {
            if (a[i]=='0'){
                if (b[i]=='0'){
                    ans[i]=jin+'0';
                    jin=0;
                }else{
                    if (jin==0){
                        ans[i]='1';
                        jin=0;
                    }else{
                        jin=1;
                    }
                }
            }else{
                if (b[i]=='0'){
                    if (jin==0){
                        ans[i]='1';
                        jin=0;
                    }else{
                        jin=1;
                    }
                }else{
                    if (jin==0){
                        jin=1;
                    }else{
                        ans[i]='1';
                    }
                }
            }
        }
        ans.back()='0'+jin;
        while (!ans.empty()&&ans.back()=='0')
            ans.pop_back();
        ranges::reverse(ans);
        return ans.empty()?"0":ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}