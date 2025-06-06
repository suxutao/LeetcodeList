<p>给你一个整数数组 <code>nums</code> 和一个整数 <code>k</code> 。</p>

<p>将数组拆分成一些非空子数组。拆分的 <strong>代价</strong> 是每个子数组中的 <strong>重要性</strong> 之和。</p>

<p>令 <code>trimmed(subarray)</code> 作为子数组的一个特征，其中所有仅出现一次的数字将会被移除。</p>

<ul> 
 <li>例如，<code>trimmed([3,1,2,4,3,4]) = [3,4,3,4]</code> 。</li> 
</ul>

<p>子数组的 <strong>重要性</strong> 定义为 <code>k + trimmed(subarray).length</code> 。</p>

<ul> 
 <li>例如，如果一个子数组是 <code>[1,2,3,3,3,4,4]</code> ，<code>trimmed([1,2,3,3,3,4,4]) = [3,3,3,4,4]</code> 。这个子数组的重要性就是 <code>k + 5</code> 。</li> 
</ul>

<p>找出并返回拆分 <code>nums</code> 的所有可行方案中的最小代价。</p>

<p><strong>子数组</strong> 是数组的一个连续 <strong>非空</strong> 元素序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,1,2,1,3,3], k = 2
<strong>输出：</strong>8
<strong>解释：</strong>将 nums 拆分成两个子数组：[1,2], [1,2,1,3,3]
[1,2] 的重要性是 2 + (0) = 2 。
[1,2,1,3,3] 的重要性是 2 + (2 + 2) = 6 。
拆分的代价是 2 + 6 = 8 ，可以证明这是所有可行的拆分方案中的最小代价。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,1,2,1], k = 2
<strong>输出：</strong>6
<strong>解释：</strong>将 nums 拆分成两个子数组：[1,2], [1,2,1] 。
[1,2] 的重要性是 2 + (0) = 2 。
[1,2,1] 的重要性是 2 + (2) = 4 。
拆分的代价是 2 + 4 = 6 ，可以证明这是所有可行的拆分方案中的最小代价。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,1,2,1], k = 5
<strong>输出：</strong>10
<strong>解释：</strong>将 nums 拆分成一个子数组：[1,2,1,2,1].
[1,2,1,2,1] 的重要性是 5 + (3 + 2) = 10 。
拆分的代价是 10 ，可以证明这是所有可行的拆分方案中的最小代价。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>0 &lt;= nums[i] &lt; nums.length</code></li> 
 <li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>动态规划</li><li>计数</li></div></div><br><div><li>👍 41</li><li>👎 0</li></div>