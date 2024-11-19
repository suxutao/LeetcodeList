#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>q;
        string s;
        if(a) q.emplace(a,'a');
        if(b) q.emplace(b,'b');
        if(c) q.emplace(c,'c');
        while (!q.empty()){
            if (s.size()>1&&s[s.size()-1]==q.top().second&&s[s.size()-2]==q.top().second){
                auto p=q.top();
                q.pop();
                if (q.empty())
                    break;
                auto t=q.top();q.pop();
                s.push_back(t.second);
                q.push(p);
                if (t.first>1)
                    q.emplace(t.first-1,t.second);
            }else{
                auto t=q.top();q.pop();
                s.push_back(t.second);
                if (t.first>1)
                    q.emplace(t.first-1,t.second);
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}