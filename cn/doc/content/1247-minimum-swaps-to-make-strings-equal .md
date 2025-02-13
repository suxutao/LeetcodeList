<p>有两个长度相同的字符串&nbsp;<code>s1</code> 和&nbsp;<code>s2</code>，且它们其中&nbsp;<strong>只含有</strong>&nbsp;字符&nbsp;<code>"x"</code> 和&nbsp;<code>"y"</code>，你需要通过「交换字符」的方式使这两个字符串相同。</p>

<p>每次「交换字符」的时候，你都可以在两个字符串中各选一个字符进行交换。</p>

<p>交换只能发生在两个不同的字符串之间，绝对不能发生在同一个字符串内部。也就是说，我们可以交换&nbsp;<code>s1[i]</code> 和&nbsp;<code>s2[j]</code>，但不能交换&nbsp;<code>s1[i]</code> 和&nbsp;<code>s1[j]</code>。</p>

<p>最后，请你返回使 <code>s1</code> 和 <code>s2</code> 相同的最小交换次数，如果没有方法能够使得这两个字符串相同，则返回&nbsp;<code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>s1 = "xx", s2 = "yy"
<strong>输出：</strong>1
<strong>解释：
</strong>交换 s1[0] 和 s2[1]，得到 s1 = "yx"，s2 = "yx"。</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>s1 = "xy", s2 = "yx"
<strong>输出：</strong>2
<strong>解释：
</strong>交换 s1[0] 和 s2[0]，得到 s1 = "yy"，s2 = "xx" 。
交换 s1[0] 和 s2[1]，得到 s1 = "xy"，s2 = "xy" 。
注意，你不能交换 s1[0] 和 s1[1] 使得 s1 变成 "yx"，因为我们只能交换属于两个不同字符串的字符。</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>s1 = "xx", s2 = "xy"
<strong>输出：</strong>-1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s1.length, s2.length &lt;= 1000</code></li> 
 <li><code>s1.length == s2.length</code></li> 
 <li><code>s1, s2</code>&nbsp;只包含&nbsp;<code>'x'</code>&nbsp;或&nbsp;<code>'y'</code>。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数学</li><li>字符串</li></div></div><br><div><li>👍 178</li><li>👎 0</li></div>