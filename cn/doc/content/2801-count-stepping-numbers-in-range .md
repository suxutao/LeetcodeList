<p>给你两个正整数&nbsp;<code>low</code> 和&nbsp;<code>high</code>&nbsp;，都用字符串表示，请你统计闭区间 <code>[low, high]</code>&nbsp;内的 <strong>步进数字</strong>&nbsp;数目。</p>

<p>如果一个整数相邻数位之间差的绝对值都 <strong>恰好</strong>&nbsp;是 <code>1</code>&nbsp;，那么这个数字被称为 <strong>步进数字</strong>&nbsp;。</p>

<p>请你返回一个整数，表示闭区间&nbsp;<code>[low, high]</code>&nbsp;之间步进数字的数目。</p>

<p>由于答案可能很大，请你将它对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余</strong>&nbsp;后返回。</p>

<p><b>注意：</b>步进数字不能有前导 0 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>low = "1", high = "11"
<b>输出：</b>10
<strong>解释：</strong>区间 [1,11] 内的步进数字为 1 ，2 ，3 ，4 ，5 ，6 ，7 ，8 ，9 和 10 。总共有 10 个步进数字。所以输出为 10 。</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>low = "90", high = "101"
<b>输出：</b>2
<strong>解释：</strong>区间 [90,101] 内的步进数字为 98 和 101 。总共有 2 个步进数字。所以输出为 2 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= int(low) &lt;= int(high) &lt; 10<sup>100</sup></code></li> 
 <li><code>1 &lt;= low.length, high.length &lt;= 100</code></li> 
 <li><code>low</code> 和&nbsp;<code>high</code>&nbsp;只包含数字。</li> 
 <li><code>low</code> 和&nbsp;<code>high</code>&nbsp;都不含前导 0 。</li> 
</ul>

<div><div>Related Topics</div><div><li>字符串</li><li>动态规划</li></div></div><br><div><li>👍 23</li><li>👎 0</li></div>