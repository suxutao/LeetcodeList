#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans,temp;
    unordered_map<char,int>m;
    bool check(string&s){
        int arr['z'+1]={0};
        for (auto &i: s){
            arr[i]++;
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]>m[i])
                return false;
        }
        return true;
    }
    void dfs(vector<string>&w,vector<int>&s,int pos){
        ans= max(ans,temp);
        for (int i = pos; i < w.size(); ++i) {
            if (check(w[i])){
                for (auto &j: w[i]){
                    m[j]--;
                    temp+=s[j-'a'];
                }
                dfs(w,s,i+1);
                for (auto &j: w[i]){
                    m[j]++;
                    temp-=s[j-'a'];
                }
            }
        }
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        ans=0;temp=0;
        for (auto &i: letters){
            m[i]++;
        }
        dfs(words,score,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}