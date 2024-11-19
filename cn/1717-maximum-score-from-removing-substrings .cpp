#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans=0;
        string c[2]{"ab","ba"};
        int xy[2]{x,y};
        if (x<y)
            swap(c[0],c[1]), swap(xy[0],xy[1]);
        for (int i=0;i<2;++i){
            string t;
            for (int j = 0; j < s.size(); ++j) {
                if (t.empty()||s[j]!=c[i][1]){
                    t.push_back(s[j]);
                }else{
                    if (t.back()==c[i][0]){
                        t.pop_back();
                        ans+=xy[i];
                    }else{
                        t.push_back(s[j]);
                    }
                }
            }
            s=t;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}