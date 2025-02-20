<p>一个长度为 <code>n</code>&nbsp;下标从 <strong>0</strong>&nbsp;开始的整数数组 <code>arr</code>&nbsp;的 <strong>不平衡数字</strong>&nbsp;定义为，在&nbsp;<code>sarr = sorted(arr)</code>&nbsp;数组中，满足以下条件的下标数目：</p>

<ul> 
 <li><code>0 &lt;= i &lt; n - 1</code>&nbsp;，和</li> 
 <li><code>sarr[i+1] - sarr[i] &gt; 1</code></li> 
</ul>

<p>这里，<code>sorted(arr)</code>&nbsp;表示将数组 <code>arr</code>&nbsp;排序后得到的数组。</p>

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums</code>&nbsp;，请你返回它所有&nbsp;<strong>子数组</strong>&nbsp;的&nbsp;<strong>不平衡数字</strong>&nbsp;之和。</p>

<p>子数组指的是一个数组中连续一段 <strong>非空</strong>&nbsp;的元素序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums = [2,3,1,4]
<b>输出：</b>3
<b>解释：</b>总共有 3 个子数组有非 0 不平衡数字：
- 子数组 [3, 1] ，不平衡数字为 1 。
- 子数组 [3, 1, 4] ，不平衡数字为 1 。
- 子数组 [1, 4] ，不平衡数字为 1 。
其他所有子数组的不平衡数字都是 0 ，所以所有子数组的不平衡数字之和为 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [1,3,3,3,5]
<b>输出：</b>8
<b>解释：</b>总共有 7 个子数组有非 0 不平衡数字：
- 子数组 [1, 3] ，不平衡数字为 1 。
- 子数组 [1, 3, 3] ，不平衡数字为 1 。
- 子数组 [1, 3, 3, 3] ，不平衡数字为 1 。
- 子数组 [1, 3, 3, 3, 5] ，不平衡数字为 2 。
- 子数组 [3, 3, 3, 5] ，不平衡数字为 1 。
- 子数组 [3, 3, 5] ，不平衡数字为 1 。
- 子数组 [3, 5] ，不平衡数字为 1 。
其他所有子数组的不平衡数字都是 0 ，所以所有子数组的不平衡数字之和为 8 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= nums.length</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>有序集合</li></div></div><br><div><li>👍 17</li><li>👎 0</li></div>