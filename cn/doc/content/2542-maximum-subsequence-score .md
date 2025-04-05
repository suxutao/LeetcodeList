<p>给你两个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums1</code>&nbsp;和&nbsp;<code>nums2</code>&nbsp;，两者长度都是&nbsp;<code>n</code>&nbsp;，再给你一个正整数&nbsp;<code>k</code>&nbsp;。你必须从&nbsp;<code>nums1</code>&nbsp;中选一个长度为 <code>k</code>&nbsp;的 <strong>子序列</strong>&nbsp;对应的下标。</p>

<p>对于选择的下标&nbsp;<code>i<sub>0</sub></code>&nbsp;，<code>i<sub>1</sub></code>&nbsp;，...，&nbsp;<code>i<sub>k - 1</sub></code>&nbsp;，你的&nbsp;<strong>分数</strong>&nbsp;定义如下：</p>

<ul> 
 <li><code>nums1</code>&nbsp;中下标对应元素求和，乘以&nbsp;<code>nums2</code>&nbsp;中下标对应元素的&nbsp;<strong>最小值</strong>&nbsp;。</li> 
 <li>用公式表示：&nbsp;<code>(nums1[i<sub>0</sub>] + nums1[i<sub>1</sub>] +...+ nums1[i<sub>k - 1</sub>]) * min(nums2[i<sub>0</sub>] , nums2[i<sub>1</sub>], ... ,nums2[i<sub>k - 1</sub>])</code>&nbsp;。</li> 
</ul>

<p>请你返回 <strong>最大</strong>&nbsp;可能的分数。</p>

<p>一个数组的 <strong>子序列</strong>&nbsp;下标是集合&nbsp;<code>{0, 1, ..., n-1}</code>&nbsp;中删除若干元素得到的剩余集合，也可以不删除任何元素。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums1 = [1,3,3,2], nums2 = [2,1,3,4], k = 3
<b>输出：</b>12
<b>解释：</b>
四个可能的子序列分数为：
- 选择下标 0 ，1 和 2 ，得到分数 (1+3+3) * min(2,1,3) = 7 。
- 选择下标 0 ，1 和 3 ，得到分数 (1+3+2) * min(2,1,4) = 6 。
- 选择下标 0 ，2 和 3 ，得到分数 (1+3+2) * min(2,3,4) = 12 。
- 选择下标 1 ，2 和 3 ，得到分数 (3+3+2) * min(1,3,4) = 8 。
所以最大分数为 12 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums1 = [4,2,3,1,1], nums2 = [7,5,10,9,6], k = 1
<b>输出：</b>30
<b>解释：</b>
选择下标 2 最优：nums1[2] * nums2[2] = 3 * 10 = 30 是最大可能分数。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums1.length == nums2.length</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= nums1[i], nums2[j] &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= k &lt;= n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>排序</li><li>堆（优先队列）</li></div></div><br><div><li>👍 113</li><li>👎 0</li></div>