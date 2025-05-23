<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> 和一个整数 <code>k</code> 。</p>

<p>请你用整数形式返回 <code>nums</code> 中的特定元素之 <strong>和</strong> ，这些特定元素满足：其对应下标的二进制表示中恰存在 <code>k</code> 个置位。</p>

<p>整数的二进制表示中的 1 就是这个整数的 <strong>置位</strong> 。</p>

<p>例如，<code>21</code> 的二进制表示为 <code>10101</code> ，其中有 <code>3</code> 个置位。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,10,1,5,2], k = 1
<strong>输出：</strong>13
<strong>解释：</strong>下标的二进制表示是： 
0 = 000<sub>2</sub>
1 = 001<sub>2</sub>
2 = 010<sub>2</sub>
3 = 011<sub>2</sub>
4 = 100<sub>2 
</sub>下标 1、2 和 4 在其二进制表示中都存在 k = 1 个置位。
因此，答案为 nums[1] + nums[2] + nums[4] = 13 。</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [4,3,2,1], k = 2
<strong>输出：</strong>1
<strong>解释：</strong>下标的二进制表示是： 
0 = 00<sub>2</sub>
1 = 01<sub>2</sub>
2 = 10<sub>2</sub>
3 = 11<sub>2
</sub>只有下标 3 的二进制表示中存在 k = 2 个置位。
因此，答案为 nums[3] = 1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= k &lt;= 10</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li></div></div><br><div><li>👍 10</li><li>👎 0</li></div>