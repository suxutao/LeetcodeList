<p>给你一个二进制字符串 <code>s</code>（仅由 '0' 和 '1' 组成的字符串）。</p>

<p>返回所有字符都为 1 的子字符串的数目。</p>

<p>由于答案可能很大，请你将它对 10^9 + 7 取模后返回。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "0110111"
<strong>输出</strong>：9
<strong>解释：</strong>共有 9 个子字符串仅由 '1' 组成
"1" -&gt; 5 次
"11" -&gt; 3 次
"111" -&gt; 1 次</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "101"
<strong>输出：</strong>2
<strong>解释：</strong>子字符串 "1" 在 s 中共出现 2 次
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "111111"
<strong>输出：</strong>21
<strong>解释：</strong>每个子字符串都仅由 '1' 组成
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = "000"
<strong>输出：</strong>0
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>s[i] == '0'</code> 或 <code>s[i] == '1'</code></li> 
 <li><code>1 &lt;= s.length &lt;= 10^5</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li><li>字符串</li></div></div><br><div><li>👍 41</li><li>👎 0</li></div>