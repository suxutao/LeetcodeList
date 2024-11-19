<p>给你两个正整数数组&nbsp;<code>nums</code> 和&nbsp;<code>target</code>&nbsp;，两个数组长度相等。</p>

<p>在一次操作中，你可以选择两个 <strong>不同</strong>&nbsp;的下标&nbsp;<code>i</code> 和&nbsp;<code>j</code>&nbsp;，其中&nbsp;<code>0 &lt;= i, j &lt; nums.length</code>&nbsp;，并且：</p>

<ul> 
 <li>令&nbsp;<code>nums[i] = nums[i] + 2</code>&nbsp;且</li> 
 <li>令&nbsp;<code>nums[j] = nums[j] - 2</code>&nbsp;。</li> 
</ul>

<p>如果两个数组中每个元素出现的频率相等，我们称两个数组是 <strong>相似</strong>&nbsp;的。</p>

<p>请你返回将 <code>nums</code>&nbsp;变得与 <code>target</code>&nbsp;相似的最少操作次数。测试数据保证 <code>nums</code>&nbsp;一定能变得与 <code>target</code>&nbsp;相似。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [8,12,6], target = [2,14,10]
<b>输出：</b>2
<b>解释：</b>可以用两步操作将 nums 变得与 target 相似：
- 选择 i = 0 和 j = 2 ，nums = [10,12,4] 。
- 选择 i = 1 和 j = 2 ，nums = [10,14,2] 。
2 次操作是最少需要的操作次数。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [1,2,5], target = [4,1,3]
<b>输出：</b>1
<b>解释：</b>一步操作可以使 nums 变得与 target 相似：
- 选择 i = 1 和 j = 2 ，nums = [1,4,3] 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [1,1,1,1,1], target = [1,1,1,1,1]
<b>输出：</b>0
<b>解释：</b>数组 nums 已经与 target 相似。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums.length == target.length</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i], target[i] &lt;= 10<sup>6</sup></code></li> 
 <li><code>nums</code>&nbsp;一定可以变得与&nbsp;<code>target</code> 相似。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>排序</li></div></div><br><div><li>👍 29</li><li>👎 0</li></div>