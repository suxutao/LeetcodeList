<p>给你两个字符串&nbsp;<code>s1</code>&nbsp;和&nbsp;<code>s2</code>&nbsp;，它们长度相等，请你检查是否存在一个&nbsp;<code>s1</code>&nbsp; 的排列可以打破 <code>s2</code>&nbsp;的一个排列，或者是否存在一个&nbsp;<code>s2</code>&nbsp;的排列可以打破 <code>s1</code> 的一个排列。</p>

<p>字符串&nbsp;<code>x</code>&nbsp;可以打破字符串&nbsp;<code>y</code>&nbsp;（两者长度都为&nbsp;<code>n</code>&nbsp;）需满足对于所有&nbsp;<code>i</code>（在&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n - 1</code>&nbsp;之间）都有&nbsp;<code>x[i] &gt;= y[i]</code>（字典序意义下的顺序）。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s1 = "abc", s2 = "xya"
<strong>输出：</strong>true
<strong>解释：</strong>"ayx" 是 s2="xya" 的一个排列，"abc" 是字符串 s1="abc" 的一个排列，且 "ayx" 可以打破 "abc" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s1 = "abe", s2 = "acd"
<strong>输出：</strong>false 
<strong>解释：</strong>s1="abe" 的所有排列包括："abe"，"aeb"，"bae"，"bea"，"eab" 和 "eba" ，s2="acd" 的所有排列包括："acd"，"adc"，"cad"，"cda"，"dac" 和 "dca"。然而没有任何 s1 的排列可以打破 s2 的排列。也没有 s2 的排列能打破 s1 的排列。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s1 = "leetcodee", s2 = "interview"
<strong>输出：</strong>true
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>s1.length == n</code></li> 
 <li><code>s2.length == n</code></li> 
 <li><code>1 &lt;= n &lt;= 10^5</code></li> 
 <li>所有字符串都只包含小写英文字母。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>字符串</li><li>排序</li></div></div><br><div><li>👍 32</li><li>👎 0</li></div>