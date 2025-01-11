<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;。</p>

<p>你的任务是找到 <code>nums</code>&nbsp;中的 <strong>最长 <span data-keyword="subsequence-array">子序列</span></strong>&nbsp;<code>seq</code>&nbsp;，这个子序列中相邻元素的 <strong>绝对差</strong>&nbsp;构成一个 <strong>非递增</strong>&nbsp;整数序列。换句话说，<code>nums</code>&nbsp;中的序列&nbsp;<code>seq<sub>0</sub></code>, <code>seq<sub>1</sub></code>, <code>seq<sub>2</sub></code>, ..., <code>seq<sub>m</sub></code>&nbsp;满足&nbsp;<code>|seq<sub>1</sub> - seq<sub>0</sub>| &gt;= |seq<sub>2</sub> - seq<sub>1</sub>| &gt;= ... &gt;= |seq<sub>m</sub> - seq<sub>m - 1</sub>|</code>&nbsp;。</p>

<p>请你返回这个子序列的长度。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [16,6,3]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>3</span></p>

<p><b>解释：</b></p>

<p>最长子序列是&nbsp;<code>[16, 6, 3]</code>&nbsp;，相邻绝对差值为&nbsp;<code>[10, 3]</code>&nbsp;。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [6,5,3,4,2,1]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>4</span></p>

<p><strong>解释：</strong></p>

<p>最长子序列是&nbsp;<code>[6, 4, 2, 1]</code>&nbsp;，相邻绝对差值为&nbsp;<code>[2, 2, 1]</code>&nbsp;。</p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [10,20,10,19,10,20]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>5</span></p>

<p><b>解释：</b></p>

<p>最长子序列是&nbsp;<code>[10, 20, 10, 19, 10]</code>&nbsp;，相邻绝对差值为&nbsp;<code>[10, 10, 9, 9]</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= nums.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 300</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>动态规划</li></div></div><br><div><li>👍 6</li><li>👎 0</li></div>