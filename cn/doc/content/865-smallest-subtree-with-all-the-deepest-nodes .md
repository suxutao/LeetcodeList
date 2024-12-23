<p>给定一个根为&nbsp;<code>root</code>&nbsp;的二叉树，每个节点的深度是 <strong>该节点到根的最短距离</strong> 。</p>

<p>返回包含原始树中所有 <strong>最深节点</strong> 的 <em>最小子树</em> 。</p>

<p>如果一个节点在 <strong>整个树 </strong>的任意节点之间具有最大的深度，则该节点是 <strong>最深的</strong> 。</p>

<p>一个节点的 <strong>子树</strong> 是该节点加上它的所有后代的集合。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/01/sketch1.png" style="width: 300px;" /></p>

<pre>
<strong>输入：</strong>root = [3,5,1,6,2,0,8,null,null,7,4]
<strong>输出：</strong>[2,7,4]
<strong>解释：</strong>
我们返回值为 2 的节点，在图中用黄色标记。
在图中用蓝色标记的是树的最深的节点。
注意，节点 5、3 和 2 包含树中最深的节点，但节点 2 的子树最小，因此我们返回它。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>root = [1]
<strong>输出：</strong>[1]
<strong>解释：</strong>根节点是树中最深的节点。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>root = [0,1,3,null,2]
<strong>输出：</strong>[2]
<strong>解释：</strong>树中最深的节点为 2 ，有效子树为节点 2、1 和 0 的子树，但节点 2 的子树最小。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>树中节点的数量在
  <meta charset="UTF-8" />&nbsp;<code>[1, 500]</code>&nbsp;范围内。</li> 
 <li><code>0 &lt;= Node.val &lt;= 500</code></li> 
 <li>每个节点的值都是 <strong>独一无二</strong> 的。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>注意：</strong>本题与力扣 1123 重复：<a href="https://leetcode-cn.com/problems/lowest-common-ancestor-of-deepest-leaves/" target="_blank">https://leetcode-cn.com/problems/lowest-common-ancestor-of-deepest-leaves</a></p>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>广度优先搜索</li><li>哈希表</li><li>二叉树</li></div></div><br><div><li>👍 216</li><li>👎 0</li></div>