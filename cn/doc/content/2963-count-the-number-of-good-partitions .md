<p>给你一个下标从 <strong>0</strong> 开始、由 <strong>正整数</strong> 组成的数组 <code>nums</code>。</p>

<p>将数组分割成一个或多个<strong> 连续</strong> 子数组，如果不存在包含了相同数字的两个子数组，则认为是一种 <strong>好分割方案</strong> 。</p>

<p>返回 <code>nums</code> 的 <strong>好分割方案</strong> 的 <strong>数目</strong>。</p>

<p>由于答案可能很大，请返回答案对 <code>10<sup>9</sup> + 7</code> <strong>取余</strong> 的结果。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,4]
<strong>输出：</strong>8
<strong>解释：</strong>有 8 种 <strong>好分割方案 </strong>：([1], [2], [3], [4]), ([1], [2], [3,4]), ([1], [2,3], [4]), ([1], [2,3,4]), ([1,2], [3], [4]), ([1,2], [3,4]), ([1,2,3], [4]) 和 ([1,2,3,4]) 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,1,1,1]
<strong>输出：</strong>1
<strong>解释：</strong>唯一的 <strong>好分割方案</strong> 是：([1,1,1,1]) 。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,1,3]
<strong>输出：</strong>2
<strong>解释：</strong>有 2 种<strong> 好分割方案 </strong>：([1,2,1], [3]) 和 ([1,2,1,3]) 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>数学</li><li>组合数学</li></div></div><br><div><li>👍 14</li><li>👎 0</li></div>