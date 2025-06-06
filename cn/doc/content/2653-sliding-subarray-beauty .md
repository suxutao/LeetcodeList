<p>给你一个长度为 <code>n</code>&nbsp;的整数数组&nbsp;<code>nums</code>&nbsp;，请你求出每个长度为&nbsp;<code>k</code>&nbsp;的子数组的 <b>美丽值</b>&nbsp;。</p>

<p>一个子数组的 <strong>美丽值</strong>&nbsp;定义为：如果子数组中第 <code>x</code>&nbsp;<strong>小整数</strong>&nbsp;是 <strong>负数</strong>&nbsp;，那么美丽值为第 <code>x</code>&nbsp;小的数，否则美丽值为 <code>0</code>&nbsp;。</p>

<p>请你返回一个包含<em>&nbsp;</em><code>n - k + 1</code>&nbsp;个整数的数组，<strong>依次</strong>&nbsp;表示数组中从第一个下标开始，每个长度为&nbsp;<code>k</code>&nbsp;的子数组的<strong>&nbsp;美丽值</strong>&nbsp;。</p>

<ul> 
 <li> <p>子数组指的是数组中一段连续 <strong>非空</strong>&nbsp;的元素序列。</p> </li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [1,-1,-3,-2,3], k = 3, x = 2
<b>输出：</b>[-1,-2,-2]
<b>解释：</b>总共有 3 个 k = 3 的子数组。
第一个子数组是 <span><code>[1, -1, -3]</code></span> ，第二小的数是负数 -1 。
第二个子数组是 <span><code>[-1, -3, -2]</code></span> ，第二小的数是负数 -2 。
第三个子数组是 <span><code>[-3, -2, 3]&nbsp;，第二小的数是负数 -2 。</code></span></pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [-1,-2,-3,-4,-5], k = 2, x = 2
<b>输出：</b>[-1,-2,-3,-4]
<b>解释：</b>总共有 4 个 k = 2 的子数组。
<span><code>[-1, -2] 中第二小的数是负数 -1 。</code></span>
<span><code>[-2, -3] 中第二小的数是负数 -2 。</code></span>
<span><code>[-3, -4] 中第二小的数是负数 -3 。</code></span>
<span><code>[-4, -5] 中第二小的数是负数 -4 。</code></span></pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>nums = [-3,1,2,-3,0,-3], k = 2, x = 1
<b>输出：</b>[-3,0,-3,-3,-3]
<b>解释：</b>总共有 5 个 k = 2 的子数组。
<span><code>[-3, 1] 中最小的数是负数 -3 。</code></span>
<span><code>[1, 2] 中最小的数不是负数，所以美丽值为 0 。</code></span>
<span><code>[2, -3] 中最小的数是负数 -3 。</code></span>
<span><code>[-3, 0] 中最小的数是负数 -3 。</code></span>
<span><code>[0, -3] 中最小的数是负数 -3 。</code></span></pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums.length&nbsp;</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= k &lt;= n</code></li> 
 <li><code>1 &lt;= x &lt;= k&nbsp;</code></li> 
 <li><code>-50&nbsp;&lt;= nums[i] &lt;= 50&nbsp;</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>滑动窗口</li></div></div><br><div><li>👍 56</li><li>👎 0</li></div>