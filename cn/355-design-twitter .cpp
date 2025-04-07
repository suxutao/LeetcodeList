#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Twitter {
public:
    int time=0;
    unordered_map<int,unordered_set<int>>guan;
    unordered_map<int,vector<pair<int,int>>>article;
    Twitter() {

    }
    
    void postTweet(int userId, int tweetId) {
        article[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>ans,v(guan[userId].begin(),guan[userId].end());
        priority_queue<pair<int,int>>q;
        v.push_back(userId);
        for (auto &i: v){
            int n=article[i].size();
            for (int j = n-1; j >= max(0,n-10); --j) {
                q.push(article[i][j]);
            }
        }
        for (int i = 0; i < 10&&!q.empty(); ++i) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        guan[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        guan[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}