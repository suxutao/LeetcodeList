<p>给你一个整数数组 <code>nums</code> 。</p>

<p>如果一组数字 <code>(i,j)</code> 满足 <code>nums[i]</code> == <code>nums[j]</code> 且 <code>i</code> &lt; <code>j</code> ，就可以认为这是一组 <strong>好数对</strong> 。</p>

<p>返回好数对的数目。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums = [1,2,3,1,1,3]
<strong>输出：</strong>4
<strong>解释：</strong>有 4 组好数对，分别是 (0,3), (0,4), (3,4), (2,5) ，下标从 0 开始
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>nums = [1,1,1,1]
<strong>输出：</strong>6
<strong>解释：</strong>数组中的每组数字都是好数对</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>nums = [1,2,3]
<strong>输出：</strong>0
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 100</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>数学</li><li>计数</li></div></div><br><div><li>👍 136</li><li>👎 0</li></div>