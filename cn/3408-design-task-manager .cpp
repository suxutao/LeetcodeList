#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TaskManager {
public:
    unordered_map<int,pair<int,int>>m;
    priority_queue<array<int,3>>q;
    TaskManager(vector<vector<int>>& tasks) {
        for (auto &i: tasks){
            m[i[1]]={i[2],i[0]};
            q.push({i[2], i[1], i[0]});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        m[taskId]={priority,userId};
        q.push({priority,taskId,userId});
    }
    
    void edit(int taskId, int newPriority) {
        m[taskId]={newPriority,m[taskId].second};
        q.push({newPriority,taskId,m[taskId].second});
    }
    
    void rmv(int taskId) {
        m[taskId]={-1,-1};
    }
    
    int execTop() {
        while (!q.empty()){
            auto [priority,taskId,userId]=q.top();
            q.pop();
            if (m[taskId].first==priority&&m[taskId].second==userId){
                m[taskId]={-1,-1};
                return userId;
            }
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}