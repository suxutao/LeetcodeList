<p>给你两棵 <strong>无向</strong>&nbsp;树，分别有&nbsp;<code>n</code> 和&nbsp;<code>m</code>&nbsp;个节点，节点编号分别为&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n - 1</code>&nbsp;和&nbsp;<code>0</code>&nbsp;到&nbsp;<code>m - 1</code>&nbsp;。给你两个二维整数数组&nbsp;<code>edges1</code> 和&nbsp;<code>edges2</code>&nbsp;，长度分别为&nbsp;<code>n - 1</code> 和&nbsp;<code>m - 1</code>&nbsp;，其中&nbsp;<code>edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;表示在第一棵树中节点&nbsp;<code>a<sub>i</sub></code> 和&nbsp;<code>b<sub>i</sub></code>&nbsp;之间有一条边，<code>edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]</code>&nbsp;表示在第二棵树中节点&nbsp;<code>u<sub>i</sub></code> 和&nbsp;<code>v<sub>i</sub></code>&nbsp;之间有一条边。</p>

<p>你必须在第一棵树和第二棵树中分别选一个节点，并用一条边连接它们。</p>

<p>请你返回添加边后得到的树中，<strong>最小直径</strong>&nbsp;为多少。</p>

<p>一棵树的 <strong>直径</strong>&nbsp;指的是树中任意两个节点之间的最长路径长度。</p>

<p>&nbsp;</p>

<p><b>示例 1：</b><img alt="" src="https://assets.leetcode.com/uploads/2024/04/22/example11-transformed.png" style="width: 1000px; height: 494px;" /></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>edges1 = [[0,1],[0,2],[0,3]], edges2 = [[0,1]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>3</span></p>

<p><strong>解释：</strong></p>

<p>将第一棵树中的节点 0 与第二棵树中的任意节点连接，得到一棵直径为 3 的树。</p>

<p><strong class="example">示例 2：<img alt="" src="https://assets.leetcode.com/uploads/2024/04/22/example211.png" style="width: 1000px; height: 492px;" /></strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>edges1 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]], edges2 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>5</span></p>

<p><strong>解释：</strong></p>

<p>将第一棵树中的节点 0 和第二棵树中的节点 0 连接，可以得到一棵直径为 5 的树。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n, m &lt;= 10<sup>5</sup></code></li> 
 <li><code>edges1.length == n - 1</code></li> 
 <li><code>edges2.length == m - 1</code></li> 
 <li><code>edges1[i].length == edges2[i].length == 2</code></li> 
 <li><code>edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]</code></li> 
 <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li> 
 <li><code>edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]</code></li> 
 <li><code>0 &lt;= u<sub>i</sub>, v<sub>i</sub> &lt; m</code></li> 
 <li>输入保证&nbsp;<code>edges1</code> 和&nbsp;<code>edges2</code>&nbsp;分别表示一棵合法的树。</li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>广度优先搜索</li><li>图</li></div></div><br><div><li>👍 13</li><li>👎 0</li></div>