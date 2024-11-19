<p>树可以看成是一个连通且 <strong>无环&nbsp;</strong>的&nbsp;<strong>无向&nbsp;</strong>图。</p>

<p>给定往一棵&nbsp;<code>n</code> 个节点 (节点值&nbsp;<code>1～n</code>) 的树中添加一条边后的图。添加的边的两个顶点包含在 <code>1</code> 到 <code>n</code>&nbsp;中间，且这条附加的边不属于树中已存在的边。图的信息记录于长度为 <code>n</code> 的二维数组 <code>edges</code>&nbsp;，<code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;表示图中在 <code>ai</code> 和 <code>bi</code> 之间存在一条边。</p>

<p>请找出一条可以删去的边，删除后可使得剩余部分是一个有着 <code>n</code> 个节点的树。如果有多个答案，则返回数组&nbsp;<code>edges</code>&nbsp;中最后出现的边。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1626676174-hOEVUL-image.png" style="width: 152px; " /></p>

<pre>
<strong>输入:</strong> edges = [[1,2],[1,3],[2,3]]
<strong>输出:</strong> [2,3]
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1626676179-kGxcmu-image.png" style="width: 250px; " /></p>

<pre>
<strong>输入:</strong> edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]
<strong>输出:</strong> [1,4]
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>n == edges.length</code></li> 
 <li><code>3 &lt;= n &lt;= 1000</code></li> 
 <li><code>edges[i].length == 2</code></li> 
 <li><code>1 &lt;= ai&nbsp;&lt; bi&nbsp;&lt;= edges.length</code></li> 
 <li><code>ai != bi</code></li> 
 <li><code>edges</code> 中无重复元素</li> 
 <li>给定的图是连通的&nbsp;</li> 
</ul>

<p>&nbsp;</p>

<p>
 <meta charset="UTF-8" />注意：本题与主站 684&nbsp;题相同：&nbsp;<a href="https://leetcode-cn.com/problems/redundant-connection/">https://leetcode-cn.com/problems/redundant-connection/</a></p>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>广度优先搜索</li><li>并查集</li><li>图</li></div></div><br><div><li>👍 56</li><li>👎 0</li></div>