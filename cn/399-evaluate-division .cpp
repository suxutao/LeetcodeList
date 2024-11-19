#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string, string> parent;
    unordered_map<string, double> m;
    string find(string x){
        if(parent[x] == x)
            return x;
        string px = parent[x];
        string res =  parent[x] = find(parent[x]);
        m[x] *= m[px];
        return res;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = equations.size();
        vector<double> ans;
        for(int i = 0; i < n; i ++ ){
            string a = equations[i][0], b = equations[i][1];
            double v = values[i];
            if(parent.find(a) == parent.end() && parent.find(b) == parent.end()){
                parent[a] = a;
                parent[b] = a;
                m[b] = v, m[a] = 1.0;
            }else if(parent.find(a) == parent.end()){
                parent[a] = a;
                string pb = find(b);
                m[a] = 1.0;
                m[pb] = v / m[b];
                parent[pb] = a;
            }else if(parent.find(b) == parent.end()){
                parent[b] = a;
                m[b] = v;
            }else{
                string pa = find(a), pb = find(b);
                if(pa == pb)
                    continue;
                parent[pb] = pa;
                m[pb] = m[a] * v / m[b];
            }
        }
        for(const auto &item : queries){
            string a = item[0], b = item[1];
            if(parent.find(a) == parent.end() || parent.find(b) == parent.end())    ans.push_back(-1.0);
            else{
                string pa = find(a), pb = find(b);
                if(pa != pb)
                    ans.push_back(-1.0);
                else
                    ans.push_back(m[b] / m[a]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}