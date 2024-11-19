<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和一个 <strong>非负</strong>&nbsp;整数&nbsp;<code>k</code>&nbsp;。如果一个整数序列&nbsp;<code>seq</code>&nbsp;满足在范围下标范围&nbsp;<code>[0, seq.length - 2]</code>&nbsp;中存在 <strong>不超过</strong>&nbsp;<code>k</code>&nbsp;个下标 <code>i</code>&nbsp;满足&nbsp;<code>seq[i] != seq[i + 1]</code>&nbsp;，那么我们称这个整数序列为&nbsp;<strong>好</strong>&nbsp;序列。</p>

<p>请你返回 <code>nums</code>&nbsp;中&nbsp;<strong>好</strong> <span data-keyword="subsequence-array">子序列</span>&nbsp;的最长长度</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [1,2,1,1,3], k = 2</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>4</span></p>

<p><strong>解释：</strong></p>

<p>最长好子序列为&nbsp;<code>[<em><strong>1</strong></em>,<em><strong>2</strong></em>,<strong><em>1</em></strong>,<em><strong>1</strong></em>,3]</code>&nbsp;。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [1,2,3,4,5,1], k = 0</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>2</span></p>

<p><strong>解释：</strong></p>

<p>最长好子序列为&nbsp;<code>[<strong><em>1</em></strong>,2,3,4,5,<strong><em>1</em></strong>]</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>3</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>0 &lt;= k &lt;= min(50, nums.length)</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>动态规划</li></div></div><br><div><li>👍 6</li><li>👎 0</li></div>