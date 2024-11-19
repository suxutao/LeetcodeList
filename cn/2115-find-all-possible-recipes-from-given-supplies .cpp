#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string,vector<string>>m;
    unordered_map<string,int>in;
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string>se(recipes.begin(),recipes.end());
        vector<string>s;
        int n=recipes.size();
        for (int i = 0; i < n; ++i) {
            in[recipes[i]]+=ingredients[i].size();
            for (auto &j: ingredients[i]){
                m[j].push_back(recipes[i]);
            }
        }
        for (auto &i: supplies){
            for (auto &j: m[i]){
                --in[j];
            }
        }
        queue<string>q;
        for (auto &[a,b]: in){
            if (b==0)
                q.push(a);
        }
        while (!q.empty()){
            s.push_back(q.front());
            q.pop();
            for (auto &i: m[s.back()]){
                --in[i];
                if (in[i]==0)
                    q.push(i);
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}