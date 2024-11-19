<p>给你一个长度为 <code>n</code>&nbsp;下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums</code>&nbsp;，它包含&nbsp;<code>1</code>&nbsp;到&nbsp;<code>n</code>&nbsp;的所有数字，请你返回上升四元组的数目。</p>

<p>如果一个四元组&nbsp;<code>(i, j, k, l)</code>&nbsp;满足以下条件，我们称它是上升的：</p>

<ul> 
 <li><code>0 &lt;= i &lt; j &lt; k &lt; l &lt; n</code>&nbsp;且</li> 
 <li><code>nums[i] &lt; nums[k] &lt; nums[j] &lt; nums[l]</code>&nbsp;。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [1,3,2,4,5]
<b>输出：</b>2
<b>解释：</b>
- 当 i = 0 ，j = 1 ，k = 2 且 l = 3 时，有 nums[i] &lt; nums[k] &lt; nums[j] &lt; nums[l] 。
- 当 i = 0 ，j = 1 ，k = 2 且 l = 4 时，有 nums[i] &lt; nums[k] &lt; nums[j] &lt; nums[l] 。
没有其他的四元组，所以我们返回 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [1,2,3,4]
<b>输出：</b>0
<b>解释：</b>只存在一个四元组 i = 0 ，j = 1 ，k = 2 ，l = 3 ，但是 nums[j] &lt; nums[k] ，所以我们返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>4 &lt;= nums.length &lt;= 4000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= nums.length</code></li> 
 <li><code>nums</code>&nbsp;中所有数字 <strong>互不相同</strong>&nbsp;，<code>nums</code>&nbsp;是一个排列。</li> 
</ul>

<div><div>Related Topics</div><div><li>树状数组</li><li>数组</li><li>动态规划</li><li>枚举</li><li>前缀和</li></div></div><br><div><li>👍 64</li><li>👎 0</li></div>