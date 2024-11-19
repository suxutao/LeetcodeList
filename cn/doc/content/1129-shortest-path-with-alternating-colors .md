<p>给定一个整数 <code>n</code>，即有向图中的节点数，其中节点标记为 <code>0</code> 到 <code>n - 1</code>。图中的每条边为红色或者蓝色，并且可能存在自环或平行边。</p>

<p>给定两个数组&nbsp;<code>redEdges</code>&nbsp;和&nbsp;<code>blueEdges</code>，其中：</p>

<ul> 
 <li><code>redEdges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;表示图中存在一条从节点&nbsp;<code>a<sub>i</sub></code>&nbsp;到节点&nbsp;<code>b<sub>i</sub></code>&nbsp;的红色有向边，</li> 
 <li><code>blueEdges[j] = [u<sub>j</sub>, v<sub>j</sub>]</code>&nbsp;表示图中存在一条从节点&nbsp;<code>u<sub>j</sub></code>&nbsp;到节点&nbsp;<code>v<sub>j</sub></code>&nbsp;的蓝色有向边。</li> 
</ul>

<p>返回长度为 <code>n</code> 的数组&nbsp;<code>answer</code>，其中&nbsp;<code>answer[X]</code>&nbsp;是从节点&nbsp;<code>0</code>&nbsp;到节点&nbsp;<code>X</code>&nbsp;的红色边和蓝色边交替出现的最短路径的长度。如果不存在这样的路径，那么 <code>answer[x] = -1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 3, red_edges = [[0,1],[1,2]], blue_edges = []
<strong>输出：</strong>[0,1,-1]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 3, red_edges = [[0,1]], blue_edges = [[2,1]]
<strong>输出：</strong>[0,1,-1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 100</code></li> 
 <li><code>0 &lt;= redEdges.length,&nbsp;blueEdges.length &lt;= 400</code></li> 
 <li><code>redEdges[i].length == blueEdges[j].length == 2</code></li> 
 <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub>, u<sub>j</sub>, v<sub>j</sub>&nbsp;&lt; n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>广度优先搜索</li><li>图</li></div></div><br><div><li>👍 312</li><li>👎 0</li></div>