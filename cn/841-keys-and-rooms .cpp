#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>v(rooms.size(),false);
        v[0]=true;
        queue<int>q;
        for (const auto &item: rooms[0]){
            v[item]=true;
            q.push(item);
        }
        while (!q.empty()){
            int a=q.front();
            for (const auto &i: rooms[a]){
                if (!v[i]) {
                    v[i]=true;
                    q.push(i);
                }
            }
            q.pop();
        }
        if (find(v.begin(), v.end(),false)==v.end())
            return true;
        else
            return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}