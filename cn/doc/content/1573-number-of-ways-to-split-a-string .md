<p>给你一个二进制串&nbsp;<code>s</code>&nbsp; （一个只包含 0 和 1 的字符串），我们可以将 <code>s</code>&nbsp;分割成 3 个 <strong>非空</strong>&nbsp;字符串 s1, s2, s3 （s1 + s2 + s3 = s）。</p>

<p>请你返回分割&nbsp;<code>s</code>&nbsp;的方案数，满足 s1，s2 和 s3 中字符 '1' 的数目相同。</p>

<p>由于答案可能很大，请将它对 10^9 + 7 取余后返回。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "10101"
<strong>输出：</strong>4
<strong>解释：</strong>总共有 4 种方法将 s 分割成含有 '1' 数目相同的三个子字符串。
"1|010|1"
"1|01|01"
"10|10|1"
"10|1|01"
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "1001"
<strong>输出：</strong>0
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "0000"
<strong>输出：</strong>3
<strong>解释：</strong>总共有 3 种分割 s 的方法。
"0|0|00"
"0|00|0"
"00|0|0"
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = "100100010100110"
<strong>输出：</strong>12
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>s[i] == '0'</code>&nbsp;或者&nbsp;<code>s[i] == '1'</code></li> 
 <li><code>3 &lt;= s.length &lt;= 10^5</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li><li>字符串</li></div></div><br><div><li>👍 20</li><li>👎 0</li></div>