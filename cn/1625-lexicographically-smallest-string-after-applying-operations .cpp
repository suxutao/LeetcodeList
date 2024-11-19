#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_set<string>se;
    queue<string>q;
    string findLexSmallestString(string s, int a, int b) {
        string ans=s;
        q.push(s);
        se.insert(s);
        while (!q.empty()){
            string t1=q.front(),t2=q.front();
            q.pop();
            t2=t2.substr(b)+t2.substr(0,b);
            if (!se.contains(t2)){
                se.insert(t2);
                q.push(t2);
            }
            for (int i = 1; i < s.size(); i+=2) {
                t1[i]+=a;
                if (t1[i]>'9')
                    t1[i]-=10;
            }
            if (!se.contains(t1)){
                se.insert(t1);
                q.push(t1);
            }
            ans= min(ans, min(t1,t2));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}