<p>给你一个有 <code>n</code> 个结点的二叉树的根结点 <code>root</code> ，其中树中每个结点 <code>node</code> 都对应有 <code>node.val</code> 枚硬币。整棵树上一共有 <code>n</code> 枚硬币。</p>

<p>在一次移动中，我们可以选择两个相邻的结点，然后将一枚硬币从其中一个结点移动到另一个结点。移动可以是从父结点到子结点，或者从子结点移动到父结点。</p>

<p>返回使每个结点上 <strong>只有</strong> 一枚硬币所需的 <strong>最少</strong> 移动次数。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/18/tree1.png" style="width: 250px; height: 236px;" /> 
<pre>
<strong>输入：</strong>root = [3,0,0]
<strong>输出：</strong>2
<strong>解释：</strong>一枚硬币从根结点移动到左子结点，一枚硬币从根结点移动到右子结点。
</pre>

<p><strong class="example">示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/18/tree2.png" style="width: 250px; height: 236px;" /> 
<pre>
<strong>输入：</strong>root = [0,3,0]
<strong>输出：</strong>3
<strong>解释：</strong>将两枚硬币从根结点的左子结点移动到根结点（两次移动）。然后，将一枚硬币从根结点移动到右子结点。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>树中节点的数目为 <code>n</code></li> 
 <li><code>1 &lt;= n &lt;= 100</code></li> 
 <li><code>0 &lt;= Node.val &lt;= n</code></li> 
 <li>所有 <code>Node.val</code> 的值之和是 <code>n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>二叉树</li></div></div><br><div><li>👍 512</li><li>👎 0</li></div>