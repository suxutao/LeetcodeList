<p>给你两个数字字符串&nbsp;<code>num1</code>&nbsp;和&nbsp;<code>num2</code>&nbsp;，以及两个整数&nbsp;<code>max_sum</code> 和&nbsp;<code>min_sum</code>&nbsp;。如果一个整数&nbsp;<code>x</code>&nbsp;满足以下条件，我们称它是一个好整数：</p>

<ul> 
 <li><code>num1 &lt;= x &lt;= num2</code></li> 
 <li><code>min_sum &lt;= digit_sum(x) &lt;= max_sum</code>.</li> 
</ul>

<p>请你返回好整数的数目。答案可能很大，请返回答案对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;取余后的结果。</p>

<p>注意，<code>digit_sum(x)</code>&nbsp;表示&nbsp;<code>x</code>&nbsp;各位数字之和。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>num1 = "1", num2 = "12", min_num = 1, max_num = 8
<b>输出：</b>11
<b>解释：</b>总共有 11 个整数的数位和在 1 到 8 之间，分别是 1,2,3,4,5,6,7,8,10,11 和 12 。所以我们返回 11 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>num1 = "1", num2 = "5", min_num = 1, max_num = 5
<b>输出：</b>5
<b>解释：</b>数位和在 1 到 5 之间的 5 个整数分别为 1,2,3,4 和 5 。所以我们返回 5 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= num1 &lt;= num2 &lt;= 10<sup>22</sup></code></li> 
 <li><code>1 &lt;= min_sum &lt;= max_sum &lt;= 400</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li><li>字符串</li><li>动态规划</li></div></div><br><div><li>👍 48</li><li>👎 0</li></div>