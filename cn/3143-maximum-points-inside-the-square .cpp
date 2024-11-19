#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        int ans=0,temp=-1;
        priority_queue<pair<int,char>,vector<pair<int,char>>,greater<>>q;
        unordered_set<char>se;
        for (int i = 0; i < s.size(); ++i) {
            q.push({max(abs(points[i][1]),abs(points[i][0])),s[i]});
        }
        while (temp&&!q.empty()){
            int ju=q.top().first;
            temp=0;
            while (!q.empty()&&q.top().first==ju){
                if (se.contains(q.top().second)){
                    temp=0;
                    break;
                }else{
                    se.insert(q.top().second);
                    ++temp;
                }
                q.pop();
            }
            ans+=temp;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}