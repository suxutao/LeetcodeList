<p>给你二叉树的根节点 <code>root</code> 和一个整数 <code>limit</code> ，请你同时删除树中所有 <strong>不足节点 </strong>，并返回最终二叉树的根节点。</p>

<p>假如通过节点 <code>node</code> 的每种可能的 “根-叶” 路径上值的总和全都小于给定的 <code>limit</code>，则该节点被称之为<strong> 不足节点 </strong>，需要被删除。</p>

<p><strong>叶子节点</strong>，就是没有子节点的节点。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/05/insufficient-11.png" style="width: 500px; height: 207px;" /> 
<pre>
<strong>输入：</strong>root = [1,2,3,4,-99,-99,7,8,9,-99,-99,12,13,-99,14], limit = 1
<strong>输出：</strong>[1,2,3,4,null,null,7,8,9,null,14]
</pre>

<p><strong class="example">示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/05/insufficient-3.png" style="width: 400px; height: 274px;" /> 
<pre>
<strong>输入：</strong>root = [5,4,8,11,null,17,4,7,1,null,null,5,3], limit = 22
<strong>输出：</strong>[5,4,8,11,null,17,4,7,null,null,null,5]
</pre>

<p><strong class="example">示例 3：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/11/screen-shot-2019-06-11-at-83301-pm.png" style="width: 250px; height: 199px;" /> 
<pre>
<strong>输入：</strong>root = [1,2,-3,-5,null,4,null], limit = -1
<strong>输出：</strong>[1,null,-3,4]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>树中节点数目在范围 <code>[1, 5000]</code> 内</li> 
 <li><code>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li> 
 <li><code>-10<sup>9</sup> &lt;= limit &lt;= 10<sup>9</sup></code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>二叉树</li></div></div><br><div><li>👍 185</li><li>👎 0</li></div>