<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和一个整数&nbsp;<code>k</code>&nbsp;，请你返回 <strong>非空</strong>&nbsp;子序列元素和的最大值，子序列需要满足：子序列中每两个 <strong>相邻</strong>&nbsp;的整数&nbsp;<code>nums[i]</code>&nbsp;和&nbsp;<code>nums[j]</code>&nbsp;，它们在原数组中的下标&nbsp;<code>i</code>&nbsp;和&nbsp;<code>j</code>&nbsp;满足&nbsp;<code>i &lt; j</code>&nbsp;且 <code>j - i &lt;= k</code> 。</p>

<p>数组的子序列定义为：将数组中的若干个数字删除（可以删除 0 个数字），剩下的数字按照原本的顺序排布。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums = [10,2,-10,5,20], k = 2
<strong>输出：</strong>37
<strong>解释：</strong>子序列为 [10, 2, 5, 20] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>nums = [-1,-2,-3], k = 1
<strong>输出：</strong>-1
<strong>解释：</strong>子序列必须是非空的，所以我们选择最大的数字。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>nums = [10,-2,-10,-5,20], k = 2
<strong>输出：</strong>23
<strong>解释：</strong>子序列为 [10, -2, -5, 20] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= k &lt;= nums.length &lt;= 10^5</code></li> 
 <li><code>-10^4&nbsp;&lt;= nums[i] &lt;= 10^4</code></li> 
</ul>

<div><div>Related Topics</div><div><li>队列</li><li>数组</li><li>动态规划</li><li>滑动窗口</li><li>单调队列</li><li>堆（优先队列）</li></div></div><br><div><li>👍 138</li><li>👎 0</li></div>