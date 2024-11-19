<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> ，请你找出一个下标从 <strong>0</strong> 开始的整数数组 <code>answer</code> ，其中：</p>

<ul> 
 <li><code>answer.length == nums.length</code></li> 
 <li><code>answer[i] = |leftSum[i] - rightSum[i]|</code></li> 
</ul>

<p>其中：</p>

<ul> 
 <li><code>leftSum[i]</code> 是数组 <code>nums</code> 中下标 <code>i</code> 左侧元素之和。如果不存在对应的元素，<code>leftSum[i] = 0</code> 。</li> 
 <li><code>rightSum[i]</code> 是数组 <code>nums</code> 中下标 <code>i</code> 右侧元素之和。如果不存在对应的元素，<code>rightSum[i] = 0</code> 。</li> 
</ul>

<p>返回数组 <code>answer</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums = [10,4,8,3]
<strong>输出：</strong>[15,1,11,22]
<strong>解释：</strong>数组 leftSum 为 [0,10,14,22] 且数组 rightSum 为 [15,11,3,0] 。
数组 answer 为 [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>nums = [1]
<strong>输出：</strong>[0]
<strong>解释：</strong>数组 leftSum 为 [0] 且数组 rightSum 为 [0] 。
数组 answer 为 [|0 - 0|] = [0] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>前缀和</li></div></div><br><div><li>👍 17</li><li>👎 0</li></div>