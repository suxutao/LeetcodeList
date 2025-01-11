#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasMatch(string s, string p) {
        if (p[0]=='*'){
            p=p.substr(1);
            return s.find(p)!=string::npos;
        }else if (p.back()=='*'){
            p.pop_back();
            return s.find(p)!=string::npos;
        }else{
            int pos=p.find('*');
            string p1=p.substr(0,pos);
            string p2=p.substr(pos+1);
            int pos1=s.find(p1);
            if (pos1==string::npos)
                return false;
            return s.find(p2,pos1+p1.size())!=string::npos;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().hasMatch("eeeeete","tte*t");
    return 0;
}