#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>v(n);
        int time=0,temp;
        stack<int>s;
        for (auto &i: logs){
            vector<string>vs;
            stringstream ss(i);
            string t;
            while (getline(ss,t,':')){
                vs.push_back(t);
            }
            temp=stoi(vs[2]);
            if (vs[1]=="start") {
                if (!s.empty())
                    v[s.top()]+=temp-time;
                time=temp;
                s.push(stoi(vs[0]));
            }else{
                v[s.top()]+=temp+1-time;
                time=temp+1;
                s.pop();
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}