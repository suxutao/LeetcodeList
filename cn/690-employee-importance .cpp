#include "../../../stdc.h"
using namespace std;

class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

//leetcode submit region begin(Prohibit modification and deletion)
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,Employee*>m;
    int dfs(Employee*e,int sum=0){
        int ans=sum+e->importance;
        for (auto &i: e->subordinates){
            ans+= dfs(m[i]);
        }
        return ans;
    }
    int getImportance(vector<Employee*> employees, int id) {
        Employee*e;
        for (auto &i: employees){
            if (i->id==id){
                e=i;
            }
            m[i->id]=i;
        }
        return dfs(e);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}