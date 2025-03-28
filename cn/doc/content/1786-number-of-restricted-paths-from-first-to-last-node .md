<p>现有一个加权无向连通图。给你一个正整数 <code>n</code> ，表示图中有 <code>n</code> 个节点，并按从 <code>1</code> 到 <code>n</code> 给节点编号；另给你一个数组 <code>edges</code> ，其中每个 <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>, weight<sub>i</sub>]</code> 表示存在一条位于节点 <code>u<sub>i</sub></code> 和 <code>v<sub>i</sub></code> 之间的边，这条边的权重为 <code>weight<sub>i</sub></code> 。</p>

<p>从节点 <code>start</code> 出发到节点 <code>end</code> 的路径是一个形如 <code>[z<sub>0</sub>, z<sub>1</sub>,<sub> </sub>z<sub>2</sub>, ..., z<sub>k</sub>]</code> 的节点序列，满足 <code>z<sub>0 </sub>= start</code> 、<code>z<sub>k</sub> = end</code> 且在所有符合 <code>0 &lt;= i &lt;= k-1</code> 的节点 <code>z<sub>i</sub></code> 和 <code>z<sub>i+1</sub></code> 之间存在一条边。</p>

<p>路径的距离定义为这条路径上所有边的权重总和。用 <code>distanceToLastNode(x)</code> 表示节点 <code>n</code> 和 <code>x</code> 之间路径的最短距离。<strong>受限路径</strong> 为满足 <code>distanceToLastNode(z<sub>i</sub>) &gt; distanceToLastNode(z<sub>i+1</sub>)</code> 的一条路径，其中 <code>0 &lt;= i &lt;= k-1</code> 。</p>

<p>返回从节点 <code>1</code> 出发到节点 <code>n</code> 的 <strong>受限路径数</strong> 。由于数字可能很大，请返回对 <code>10<sup>9</sup> + 7</code> <strong>取余</strong> 的结果。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/03/07/restricted_paths_ex1.png" style="width: 351px; height: 341px;" /> 
<pre>
<strong>输入：</strong>n = 5, edges = [[1,2,3],[1,3,3],[2,3,1],[1,4,2],[5,2,2],[3,5,1],[5,4,10]]
<strong>输出：</strong>3
<strong>解释：</strong>每个圆包含黑色的节点编号和蓝色的 distanceToLastNode 值。三条受限路径分别是：
1) 1 --&gt; 2 --&gt; 5
2) 1 --&gt; 2 --&gt; 3 --&gt; 5
3) 1 --&gt; 3 --&gt; 5
</pre>

<p><strong>示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/03/07/restricted_paths_ex22.png" style="width: 356px; height: 401px;" /> 
<pre>
<strong>输入：</strong>n = 7, edges = [[1,3,1],[4,1,2],[7,3,4],[2,5,3],[5,6,1],[6,7,2],[7,5,3],[2,6,4]]
<strong>输出：</strong>1
<strong>解释：</strong>每个圆包含黑色的节点编号和蓝色的 distanceToLastNode 值。唯一一条受限路径是：1 --&gt; 3 --&gt; 7 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>n - 1 &lt;= edges.length &lt;= 4 * 10<sup>4</sup></code></li> 
 <li><code>edges[i].length == 3</code></li> 
 <li><code>1 &lt;= u<sub>i</sub>, v<sub>i</sub> &lt;= n</code></li> 
 <li><code>u<sub>i </sub>!= v<sub>i</sub></code></li> 
 <li><code>1 &lt;= weight<sub>i</sub> &lt;= 10<sup>5</sup></code></li> 
 <li>任意两个节点之间至多存在一条边</li> 
 <li>任意两个节点之间至少存在一条路径</li> 
</ul>

<div><div>Related Topics</div><div><li>图</li><li>拓扑排序</li><li>动态规划</li><li>最短路</li><li>堆（优先队列）</li></div></div><br><div><li>👍 109</li><li>👎 0</li></div>