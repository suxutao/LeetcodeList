<p>力扣数据中心有&nbsp;<code>n</code>&nbsp;台服务器，分别按从&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n-1</code>&nbsp;的方式进行了编号。它们之间以 <strong>服务器到服务器</strong> 的形式相互连接组成了一个内部集群，连接是无向的。用 &nbsp;<code>connections</code> 表示集群网络，<code>connections[i] = [a, b]</code>&nbsp;表示服务器 <code>a</code>&nbsp;和 <code>b</code>&nbsp;之间形成连接。任何服务器都可以直接或者间接地通过网络到达任何其他服务器。</p>

<p><strong>关键连接</strong><em> </em>是在该集群中的重要连接，假如我们将它移除，便会导致某些服务器无法访问其他服务器。</p>

<p>请你以任意顺序返回该集群内的所有 <strong>关键连接</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/original_images/critical-connections-in-a-network.png" style="height: 205px; width: 200px;" /></strong></p>

<pre>
<strong>输入：</strong>n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
<strong>输出：</strong>[[1,3]]
<strong>解释：</strong>[[3,1]] 也是正确的。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<b>输入：</b>n = 2, connections = [[0,1]]
<b>输出：</b>[[0,1]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>n - 1 &lt;= connections.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= n - 1</code></li> 
 <li><code>a<sub>i</sub> != b<sub>i</sub></code></li> 
 <li>不存在重复的连接</li> 
</ul>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>图</li><li>双连通分量</li></div></div><br><div><li>👍 277</li><li>👎 0</li></div>