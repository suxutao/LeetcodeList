<p>给你一棵根为&nbsp;<code>root</code>&nbsp;的二叉树，请你返回二叉树中好节点的数目。</p>

<p>「好节点」X 定义为：从根到该节点 X 所经过的节点中，没有任何节点的值大于 X 的值。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/05/16/test_sample_1.png" style="height: 156px; width: 263px;" /></strong></p>

<pre><strong>输入：</strong>root = [3,1,4,3,null,1,5]
<strong>输出：</strong>4
<strong>解释：</strong>图中蓝色节点为好节点。
根节点 (3) 永远是个好节点。
节点 4 -&gt; (3,4) 是路径中的最大值。
节点 5 -&gt; (3,4,5) 是路径中的最大值。
节点 3 -&gt; (3,1,3) 是路径中的最大值。</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/05/16/test_sample_2.png" style="height: 161px; width: 157px;" /></strong></p>

<pre><strong>输入：</strong>root = [3,3,null,4,2]
<strong>输出：</strong>3
<strong>解释：</strong>节点 2 -&gt; (3, 3, 2) 不是好节点，因为 "3" 比它大。</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>root = [1]
<strong>输出：</strong>1
<strong>解释：</strong>根节点是好节点。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>二叉树中节点数目范围是&nbsp;<code>[1, 10^5]</code>&nbsp;。</li> 
 <li>每个节点权值的范围是&nbsp;<code>[-10^4, 10^4]</code>&nbsp;。</li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>广度优先搜索</li><li>二叉树</li></div></div><br><div><li>👍 165</li><li>👎 0</li></div>