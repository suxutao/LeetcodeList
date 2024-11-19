#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;int cnt=0;
        for (int i = 0; i < num.size(); ++i) {
            while (!ans.empty()&&ans.back()>num[i]&&cnt<k){
                ++cnt;
                ans.pop_back();
            }
            ans.push_back(num[i]);
        }
        int pos=-1;
        for (int i = 0; i < ans.size(); ++i) {
            if (ans[i]!='0'){
                pos=i;
                break;
            }
        }
        if (~pos){
            ans=ans.substr(pos,ans.size()-pos);
        }else{
            ans="0";
        }
        while (cnt<k&&!ans.empty()){
            ans.pop_back();
            cnt++;
        }
        return ans.empty()?"0":ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}