<p>有&nbsp;<code>n</code> 个人，每个人都有一个&nbsp; <code>0</code>&nbsp;到&nbsp;<code>n-1</code>&nbsp;的唯一&nbsp;<em>id</em>&nbsp;。</p>

<p>给你数组 <code>watchedVideos</code>&nbsp; 和&nbsp;<code>friends</code>&nbsp;，其中&nbsp;<code>watchedVideos[i]</code>&nbsp; 和&nbsp;<code>friends[i]</code>&nbsp;分别表示&nbsp;<code>id = i</code>&nbsp;的人观看过的视频列表和他的好友列表。</p>

<p>Level&nbsp;<strong>1</strong>&nbsp;的视频包含所有你好友观看过的视频，level&nbsp;<strong>2</strong>&nbsp;的视频包含所有你好友的好友观看过的视频，以此类推。一般的，Level 为 <strong>k</strong>&nbsp;的视频包含所有从你出发，最短距离为&nbsp;<strong>k</strong>&nbsp;的好友观看过的视频。</p>

<p>给定你的&nbsp;<code>id</code>&nbsp; 和一个&nbsp;<code>level</code>&nbsp;值，请你找出所有指定 <code>level</code> 的视频，并将它们按观看频率升序返回。如果有频率相同的视频，请将它们按字母顺序从小到大排列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/01/03/leetcode_friends_1.png" style="height: 179px; width: 129px;" /></strong></p>

<pre><strong>输入：</strong>watchedVideos = [["A","B"],["C"],["B","C"],["D"]], friends = [[1,2],[0,3],[0,3],[1,2]], id = 0, level = 1
<strong>输出：</strong>["B","C"] 
<strong>解释：</strong>
你的 id 为 0（绿色），你的朋友包括（黄色）：
id 为 1 -&gt; watchedVideos = ["C"]&nbsp;
id 为 2 -&gt; watchedVideos = ["B","C"]&nbsp;
你朋友观看过视频的频率为：
B -&gt; 1&nbsp;
C -&gt; 2
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/01/03/leetcode_friends_2.png" style="height: 179px; width: 129px;" /></strong></p>

<pre><strong>输入：</strong>watchedVideos = [["A","B"],["C"],["B","C"],["D"]], friends = [[1,2],[0,3],[0,3],[1,2]], id = 0, level = 2
<strong>输出：</strong>["D"]
<strong>解释：</strong>
你的 id 为 0（绿色），你朋友的朋友只有一个人，他的 id 为 3（黄色）。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == watchedVideos.length ==&nbsp;friends.length</code></li> 
 <li><code>2 &lt;= n&nbsp;&lt;= 100</code></li> 
 <li><code>1 &lt;=&nbsp;watchedVideos[i].length &lt;= 100</code></li> 
 <li><code>1 &lt;=&nbsp;watchedVideos[i][j].length &lt;= 8</code></li> 
 <li><code>0 &lt;= friends[i].length &lt; n</code></li> 
 <li><code>0 &lt;= friends[i][j]&nbsp;&lt; n</code></li> 
 <li><code>0 &lt;= id &lt; n</code></li> 
 <li><code>1 &lt;= level &lt; n</code></li> 
 <li>如果&nbsp;<code>friends[i]</code> 包含&nbsp;<code>j</code>&nbsp;，那么&nbsp;<code>friends[j]</code> 包含&nbsp;<code>i</code></li> 
</ul>

<div><div>Related Topics</div><div><li>广度优先搜索</li><li>图</li><li>数组</li><li>哈希表</li><li>排序</li></div></div><br><div><li>👍 56</li><li>👎 0</li></div>