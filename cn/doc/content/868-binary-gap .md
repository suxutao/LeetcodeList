<p>给定一个正整数 <code>n</code>，找到并返回 <code>n</code> 的二进制表示中两个 <strong>相邻</strong> 1 之间的<strong> 最长距离 </strong>。如果不存在两个相邻的 1，返回 <code>0</code> 。</p>

<p>如果只有 <code>0</code> 将两个 <code>1</code> 分隔开（可能不存在 <code>0</code> ），则认为这两个 1 彼此 <strong>相邻</strong> 。两个 <code>1</code> 之间的距离是它们的二进制表示中位置的绝对差。例如，<code>"1001"</code> 中的两个 <code>1</code> 的距离为 3 。</p>

<p>&nbsp;</p>

<ul> 
</ul>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 22
<strong>输出：</strong>2
<strong>解释：</strong>22 的二进制是 "10110" 。
在 22 的二进制表示中，有三个 1，组成两对相邻的 1 。
第一对相邻的 1 中，两个 1 之间的距离为 2 。
第二对相邻的 1 中，两个 1 之间的距离为 1 。
答案取两个距离之中最大的，也就是 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 8
<strong>输出：</strong>0
<strong>解释：</strong>8 的二进制是 "1000" 。
在 8 的二进制表示中没有相邻的两个 1，所以返回 0 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 5
<strong>输出：</strong>2
<strong>解释：</strong>5 的二进制是 "101" 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li></div></div><br><div><li>👍 144</li><li>👎 0</li></div>