<p>给你一个字符串&nbsp;<code>s</code>&nbsp;，一个分割被称为 「好分割」&nbsp;当它满足：将&nbsp;<code>s</code>&nbsp;分割成 2 个字符串&nbsp;<code>p</code> 和&nbsp;<code>q</code>&nbsp;，它们连接起来等于&nbsp;<code>s</code>&nbsp;且 <code>p</code>&nbsp;和 <code>q</code>&nbsp;中不同字符的数目相同。</p>

<p>请你返回 <code>s</code>&nbsp;中好分割的数目。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "aacaba"
<strong>输出：</strong>2
<strong>解释：</strong>总共有 5 种分割字符串 <span><code>"aacaba"</code></span> 的方法，其中 2 种是好分割。
("a", "acaba") 左边字符串和右边字符串分别包含 1 个和 3 个不同的字符。
("aa", "caba") 左边字符串和右边字符串分别包含 1 个和 3 个不同的字符。
("aac", "aba") 左边字符串和右边字符串分别包含 2 个和 2 个不同的字符。这是一个好分割。
("aaca", "ba") 左边字符串和右边字符串分别包含 2 个和 2 个不同的字符。这是一个好分割。
("aacab", "a") 左边字符串和右边字符串分别包含 3 个和 1 个不同的字符。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "abcd"
<strong>输出：</strong>1
<strong>解释：</strong>好分割为将字符串分割成 ("ab", "cd") 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "aaaaa"
<strong>输出：</strong>4
<strong>解释：</strong>所有分割都是好分割。</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = "acbadbaada"
<strong>输出：</strong>2
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>s</code>&nbsp;只包含小写英文字母。</li> 
 <li><code>1 &lt;= s.length &lt;= 10^5</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>哈希表</li><li>字符串</li><li>动态规划</li></div></div><br><div><li>👍 56</li><li>👎 0</li></div>