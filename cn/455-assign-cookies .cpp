#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (!s.size())
            return 0;
        int a=g.size()-1,b=s.size()-1,result=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while((a+1)&&(b+1)){
            if (s[b]>=g[a]){
                b--;a--;result++;
            }else{
                a--;
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}