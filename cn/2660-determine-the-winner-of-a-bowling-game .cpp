#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1=0,score2=0,two1=0,two2=0;
        for (int i = 0; i < player1.size(); ++i) {
            if (player1[i]==10) {
                if (two1){
                    score1+=player1[i]*2;
                    two1=2;
                }else{
                    score1+=player1[i];
                    two1=2;
                }
                continue;
            }
            if (two1){
                score1+=player1[i]*2;
                two1--;
            }else{
                score1+=player1[i];
            }
        }
        for (int i = 0; i < player2.size(); ++i) {
            if (player2[i]==10) {
                if (two2){
                    score2+=player2[i]*2;
                    two2=2;
                }else{
                    score2+=player2[i];
                    two2=2;
                }
                continue;
            }
            if (two2){
                score2+=player2[i]*2;
                two2--;
            }else{
                score2+=player2[i];
            }
        }
        if (score1==score2)
            return 0;
        else if (score1>score2)
            return 1;
        else
            return 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}