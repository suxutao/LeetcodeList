<p>给你一棵树（即，一个连通的无环无向图），这棵树由编号从 <code>0</code>&nbsp; 到 <code>n - 1</code> 的 n 个节点组成，且恰好有 <code>n - 1</code> 条 <code>edges</code> 。树的根节点为节点 <code>0</code> ，树上的每一个节点都有一个标签，也就是字符串 <code>labels</code> 中的一个小写字符（编号为 <code>i</code> 的 节点的标签就是 <code>labels[i]</code> ）</p>

<p>边数组 <code>edges</code> 以 <code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> 的形式给出，该格式表示节点 <code>a<sub>i</sub></code> 和 <code>b<sub>i</sub></code> 之间存在一条边。</p>

<p>返回一个大小为 <em><code>n</code></em> 的数组，其中 <code>ans[i]</code> 表示第 <code>i</code> 个节点的子树中与节点 <code>i</code> 标签相同的节点数。</p>

<p>树 <code>T</code> 中的子树是由 <code>T</code> 中的某个节点及其所有后代节点组成的树。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/07/19/q3e1.jpg" style="height: 321px; width: 441px;" /></p>

<pre>
<strong>输入：</strong>n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], labels = "abaedcd"
<strong>输出：</strong>[2,1,1,1,1,1,1]
<strong>解释：</strong>节点 0 的标签为 'a' ，以 'a' 为根节点的子树中，节点 2 的标签也是 'a' ，因此答案为 2 。注意树中的每个节点都是这棵子树的一部分。
节点 1 的标签为 'b' ，节点 1 的子树包含节点 1、4 和 5，但是节点 4、5 的标签与节点 1 不同，故而答案为 1（即，该节点本身）。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/07/19/q3e2.jpg" style="height: 321px; width: 381px;" /></p>

<pre>
<strong>输入：</strong>n = 4, edges = [[0,1],[1,2],[0,3]], labels = "bbbb"
<strong>输出：</strong>[4,2,1,1]
<strong>解释：</strong>节点 2 的子树中只有节点 2 ，所以答案为 1 。
节点 3 的子树中只有节点 3 ，所以答案为 1 。
节点 1 的子树中包含节点 1 和 2 ，标签都是 'b' ，因此答案为 2 。
节点 0 的子树中包含节点 0、1、2 和 3，标签都是 'b'，因此答案为 4 。
</pre>

<p><strong>示例 3：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/07/19/q3e3.jpg" style="height: 321px; width: 381px;" /></p>

<pre>
<strong>输入：</strong>n = 5, edges = [[0,1],[0,2],[1,3],[0,4]], labels = "aabab"
<strong>输出：</strong>[3,2,1,1,1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10^5</code></li> 
 <li><code>edges.length == n - 1</code></li> 
 <li><code>edges[i].length == 2</code></li> 
 <li><code>0 &lt;= a<sub>i</sub>,&nbsp;b<sub>i</sub> &lt; n</code></li> 
 <li><code>a<sub>i</sub> !=&nbsp;b<sub>i</sub></code></li> 
 <li><code>labels.length == n</code></li> 
 <li><code>labels</code> 仅由小写英文字母组成</li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>广度优先搜索</li><li>哈希表</li><li>计数</li></div></div><br><div><li>👍 81</li><li>👎 0</li></div>