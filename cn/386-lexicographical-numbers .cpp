#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    string s;int num;
    void dfs(int pos,int value,bool bian,bool size){
        if (pos==s.size())
            return;
        if (pos==s.size()-1&&!size)
            return;
        int qi=0,zhong=9;
        if (!pos)
            qi=1;
        if (pos==s.size()-1&&bian)
            zhong=s[pos]-'0';
        for (int i = qi; i <= zhong; ++i) {
            int temp=value*10+i;
            if (temp>num)
                break;
            v.push_back(temp);
            bool b=size||i<=s[pos]-'0';
            dfs(pos+1,temp,bian&&i==s[pos]-'0',b);
        }
    }
    vector<int> lexicalOrder(int n) {
        s=to_string(n);
        num=n;
        if (n>=10)
            dfs(0,0, 1,0);
        else{
            for (int i = 0; i < n; ++i) {
                v.push_back(i+1);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}