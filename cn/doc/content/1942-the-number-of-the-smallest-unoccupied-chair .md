<p>有 <code>n</code>&nbsp;个朋友在举办一个派对，这些朋友从 <code>0</code>&nbsp;到 <code>n - 1</code>&nbsp;编号。派对里有 <strong>无数</strong>&nbsp;张椅子，编号为 <code>0</code>&nbsp;到 <code>infinity</code>&nbsp;。当一个朋友到达派对时，他会占据&nbsp;<strong>编号最小</strong>&nbsp;且未被占据的椅子。</p>

<ul> 
 <li>比方说，当一个朋友到达时，如果椅子&nbsp;<code>0</code>&nbsp;，<code>1</code>&nbsp;和&nbsp;<code>5</code>&nbsp;被占据了，那么他会占据&nbsp;<code>2</code>&nbsp;号椅子。</li> 
</ul>

<p>当一个朋友离开派对时，他的椅子会立刻变成未占据状态。如果同一时刻有另一个朋友到达，可以立即占据这张椅子。</p>

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的二维整数数组&nbsp;<code>times</code>&nbsp;，其中&nbsp;<code>times[i] = [arrival<sub>i</sub>, leaving<sub>i</sub>]</code>&nbsp;表示第 <code>i</code>&nbsp;个朋友到达和离开的时刻，同时给你一个整数 <code>targetFriend</code>&nbsp;。所有到达时间 <strong>互不相同</strong>&nbsp;。</p>

<p>请你返回编号为 <code>targetFriend</code>&nbsp;的朋友占据的 <strong>椅子编号</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>times = [[1,4],[2,3],[4,6]], targetFriend = 1
<b>输出：</b>1
<b>解释：</b>
- 朋友 0 时刻 1 到达，占据椅子 0 。
- 朋友 1 时刻 2 到达，占据椅子 1 。
- 朋友 1 时刻 3 离开，椅子 1 变成未占据。
- 朋友 0 时刻 4 离开，椅子 0 变成未占据。
- 朋友 2 时刻 4 到达，占据椅子 0 。
朋友 1 占据椅子 1 ，所以返回 1 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>times = [[3,10],[1,5],[2,6]], targetFriend = 0
<b>输出：</b>2
<b>解释：</b>
- 朋友 1 时刻 1 到达，占据椅子 0 。
- 朋友 2 时刻 2 到达，占据椅子 1 。
- 朋友 0 时刻 3 到达，占据椅子 2 。
- 朋友 1 时刻 5 离开，椅子 0 变成未占据。
- 朋友 2 时刻 6 离开，椅子 1 变成未占据。
- 朋友 0 时刻 10 离开，椅子 2 变成未占据。
朋友 0 占据椅子 2 ，所以返回 2 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == times.length</code></li> 
 <li><code>2 &lt;= n &lt;= 10<sup>4</sup></code></li> 
 <li><code>times[i].length == 2</code></li> 
 <li><code>1 &lt;= arrival<sub>i</sub> &lt; leaving<sub>i</sub> &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= targetFriend &lt;= n - 1</code></li> 
 <li>每个&nbsp;<code>arrival<sub>i</sub></code>&nbsp;时刻&nbsp;<strong>互不相同</strong>&nbsp;。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>堆（优先队列）</li></div></div><br><div><li>👍 43</li><li>👎 0</li></div>