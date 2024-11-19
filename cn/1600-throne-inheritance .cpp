#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class ThroneInheritance {
public:
    struct people{
        string name;
        bool dead;
        vector<people*>children;
        people(string name):name(name),dead(false){}
    };
    vector<string>vs;
    unordered_map<string,people*>m;
    people*head;
    ThroneInheritance(string kingName) {
        people*p=new people(kingName);
        m[kingName]=p;
        head=p;
    }
    
    void birth(string parentName, string childName) {
        people*p=new people(childName);
        m[parentName]->children.push_back(p);
        m[childName]=p;
    }
    
    void death(string name) {
        m[name]->dead= true;
    }
    void dfs(people*p){
        if (!p)
            return;
        if (!p->dead)
            vs.push_back(p->name);
        for (auto i:p->children) {
            dfs(i);
        }
    }
    vector<string> getInheritanceOrder() {
        vs.clear();
        dfs(head);
        return vs;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}