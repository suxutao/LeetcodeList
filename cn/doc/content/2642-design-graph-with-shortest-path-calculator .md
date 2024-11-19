<p>给你一个有&nbsp;<code>n</code>&nbsp;个节点的&nbsp;<strong>有向带权</strong>&nbsp;图，节点编号为&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n - 1</code>&nbsp;。图中的初始边用数组&nbsp;<code>edges</code>&nbsp;表示，其中&nbsp;<code>edges[i] = [from<sub>i</sub>, to<sub>i</sub>, edgeCost<sub>i</sub>]</code>&nbsp;表示从&nbsp;<code>from<sub>i</sub></code>&nbsp;到&nbsp;<code>to<sub>i</sub></code>&nbsp;有一条代价为&nbsp;<code>edgeCost<sub>i</sub></code>&nbsp;的边。</p>

<p>请你实现一个&nbsp;<code>Graph</code>&nbsp;类：</p>

<ul> 
 <li><code>Graph(int n, int[][] edges)</code>&nbsp;初始化图有&nbsp;<code>n</code>&nbsp;个节点，并输入初始边。</li> 
 <li><code>addEdge(int[] edge)</code>&nbsp;向边集中添加一条边，其中<strong>&nbsp;</strong><code>edge = [from, to, edgeCost]</code>&nbsp;。数据保证添加这条边之前对应的两个节点之间没有有向边。</li> 
 <li><code>int shortestPath(int node1, int node2)</code>&nbsp;返回从节点&nbsp;<code>node1</code>&nbsp;到&nbsp;<code>node2</code>&nbsp;的路径<strong>&nbsp;最小</strong>&nbsp;代价。如果路径不存在，返回&nbsp;<code>-1</code>&nbsp;。一条路径的代价是路径中所有边代价之和。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2023/01/11/graph3drawio-2.png" style="width: 621px; height: 191px;" /></p>

<pre><strong>输入：</strong>
["Graph", "shortestPath", "shortestPath", "addEdge", "shortestPath"]
[[4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]]], [3, 2], [0, 3], [[1, 3, 4]], [0, 3]]
<b>输出：</b>
[null, 6, -1, null, 6]

<strong>解释：</strong>
Graph g = new Graph(4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]]);
g.shortestPath(3, 2); // 返回 6 。从 3 到 2 的最短路径如第一幅图所示：3 -&gt; 0 -&gt; 1 -&gt; 2 ，总代价为 3 + 2 + 1 = 6 。
g.shortestPath(0, 3); // 返回 -1 。没有从 0 到 3 的路径。
g.addEdge([1, 3, 4]); // 添加一条节点 1 到节点 3 的边，得到第二幅图。
g.shortestPath(0, 3); // 返回 6 。从 0 到 3 的最短路径为 0 -&gt; 1 -&gt; 3 ，总代价为 2 + 4 = 6 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 100</code></li> 
 <li><code>0 &lt;= edges.length &lt;= n * (n - 1)</code></li> 
 <li><code>edges[i].length == edge.length == 3</code></li> 
 <li><code>0 &lt;= from<sub>i</sub>, to<sub>i</sub>, from, to, node1, node2 &lt;= n - 1</code></li> 
 <li><code>1 &lt;= edgeCost<sub>i</sub>, edgeCost &lt;= 10<sup>6</sup></code></li> 
 <li>图中任何时候都不会有重边和自环。</li> 
 <li>调用 <code>addEdge</code>&nbsp;至多&nbsp;<code>100</code>&nbsp;次。</li> 
 <li>调用 <code>shortestPath</code>&nbsp;至多&nbsp;<code>100</code>&nbsp;次。</li> 
</ul>

<div><div>Related Topics</div><div><li>图</li><li>设计</li><li>最短路</li><li>堆（优先队列）</li></div></div><br><div><li>👍 33</li><li>👎 0</li></div>