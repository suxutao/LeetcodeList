<p><span style="font-size:10.5pt"><span style="font-family:Calibri"><span style="font-size:10.5000pt"><span style="font-family:宋体"><font face="宋体">给定一个二叉搜索树</font></span></span></span></span>&nbsp;<code>root</code>&nbsp;(BST)<span style="font-size:10.5pt"><span style="font-family:Calibri"><span style="font-size:10.5000pt"><span style="font-family:宋体"><font face="宋体">，请将它的每个</font></span></span></span></span>节点<span style="font-size:10.5pt"><span style="font-family:Calibri"><span style="font-size:10.5000pt"><span style="font-family:宋体"><font face="宋体">的值替换成树中大于或者等于该</font></span></span></span></span>节点<span style="font-size:10.5pt"><span style="font-family:Calibri"><span style="font-size:10.5000pt"><span style="font-family:宋体"><font face="宋体">值的所有</font></span></span></span></span>节点<span style="font-size:10.5pt"><span style="font-family:Calibri"><span style="font-size:10.5000pt"><span style="font-family:宋体"><font face="宋体">值之和。</font></span></span></span></span></p>

<p>提醒一下， <em>二叉搜索树</em> 满足下列约束条件：</p>

<ul> 
 <li>节点的左子树仅包含键<strong> 小于 </strong>节点键的节点。</li> 
 <li>节点的右子树仅包含键<strong> 大于</strong> 节点键的节点。</li> 
 <li>左右子树也必须是二叉搜索树。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/05/03/tree_sum.png" style="height:273px; width:400px" /></strong></p>

<pre>
<strong>输入：</strong>[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
<strong>输出：</strong>[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>root = [0,null,1]
<strong>输出：</strong>[1,null,1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>树中的节点数在&nbsp;<code>[1, 100]</code>&nbsp;范围内。</li> 
 <li><code>0 &lt;= Node.val &lt;= 100</code></li> 
 <li>树中的所有值均 <strong>不重复</strong>&nbsp;。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>注意：</strong>该题目与 538:&nbsp;<a href="https://leetcode-cn.com/problems/convert-bst-to-greater-tree_sum/">https://leetcode-cn.com/problems/convert-bst-to-greater-tree_sum/&nbsp; </a>相同</p>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>二叉搜索树</li><li>二叉树</li></div></div><br><div><li>👍 227</li><li>👎 0</li></div>