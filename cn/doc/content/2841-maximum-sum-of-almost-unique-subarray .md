<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和两个正整数&nbsp;<code>m</code>&nbsp;和&nbsp;<code>k</code>&nbsp;。</p>

<p>请你返回 <code>nums</code>&nbsp;中长度为 <code>k</code>&nbsp;的&nbsp;<strong>几乎唯一</strong>&nbsp;子数组的 <strong>最大和</strong>&nbsp;，如果不存在几乎唯一子数组，请你返回 <code>0</code>&nbsp;。</p>

<p>如果 <code>nums</code>&nbsp;的一个子数组有至少 <code>m</code>&nbsp;个互不相同的元素，我们称它是 <strong>几乎唯一</strong>&nbsp;子数组。</p>

<p>子数组指的是一个数组中一段连续 <strong>非空</strong>&nbsp;的元素序列。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [2,6,7,3,1,7], m = 3, k = 4
<b>输出：</b>18
<b>解释：</b>总共有 3 个长度为 k = 4 的几乎唯一子数组。分别为 [2, 6, 7, 3] ，[6, 7, 3, 1] 和 [7, 3, 1, 7] 。这些子数组中，和最大的是 [2, 6, 7, 3] ，和为 18 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [5,9,9,2,4,5,4], m = 1, k = 3
<b>输出：</b>23
<b>解释：</b>总共有 5 个长度为 k = 3 的几乎唯一子数组。分别为 [5, 9, 9] ，[9, 9, 2] ，[9, 2, 4] ，[2, 4, 5] 和 [4, 5, 4] 。这些子数组中，和最大的是 [5, 9, 9] ，和为 23 。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [1,2,1,2,1,2,1], m = 3, k = 3
<b>输出：</b>0
<b>解释：</b>输入数组中不存在长度为 <span><code>k = 3</code></span> 的子数组含有至少  <span><code>m = 3</code></span> 个互不相同元素的子数组。所以不存在几乎唯一子数组，最大和为 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= m &lt;= k &lt;= nums.length</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>滑动窗口</li></div></div><br><div><li>👍 16</li><li>👎 0</li></div>