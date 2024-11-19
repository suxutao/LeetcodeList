#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct node{
        int son[26];
        bool fin=false;
    }t[100005];
    int cnt=1;
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans,temp;
        for (auto &s: dictionary){
            int now=0;
            for (int i = 0; i < s.size(); ++i) {
                if (t[now].son[s[i]-'a']==0)
                    t[now].son[s[i]-'a']=cnt++;
                now=t[now].son[s[i]-'a'];
                if (t[now].fin)
                    break;
                if (i==s.size()-1)
                    t[now].fin=true;
            }
        }
        stringstream ss(sentence);
        while (getline(ss,temp,' ')){
            int now=0;bool jia=true;
            for (int i = 0; i < temp.size(); ++i) {
                if (t[now].son[temp[i]-'a']==0){
                    break;
                }
                now=t[now].son[temp[i]-'a'];
                if (t[now].fin){
                    jia= false;
                    ans+=temp.substr(0,i+1)+' ';
                    break;
                }
            }
            if (jia)
                ans+=temp+' ';
        }
        ans.pop_back();
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}