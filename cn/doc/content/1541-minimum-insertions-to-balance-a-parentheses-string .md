<p>给你一个括号字符串&nbsp;<code>s</code>&nbsp;，它只包含字符&nbsp;<code>'('</code> 和&nbsp;<code>')'</code>&nbsp;。一个括号字符串被称为平衡的当它满足：</p>

<ul> 
 <li>任何左括号&nbsp;<code>'('</code>&nbsp;必须对应两个连续的右括号&nbsp;<code>'))'</code>&nbsp;。</li> 
 <li>左括号&nbsp;<code>'('</code>&nbsp;必须在对应的连续两个右括号&nbsp;<code>'))'</code>&nbsp;之前。</li> 
</ul>

<p>比方说&nbsp;<code>"())"</code>，&nbsp;<code>"())(())))"</code> 和&nbsp;<code>"(())())))"</code>&nbsp;都是平衡的，&nbsp;<code>")()"</code>，&nbsp;<code>"()))"</code> 和&nbsp;<code>"(()))"</code>&nbsp;都是不平衡的。</p>

<p>你可以在任意位置插入字符 '(' 和 ')' 使字符串平衡。</p>

<p>请你返回让 <code>s</code>&nbsp;平衡的最少插入次数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "(()))"
<strong>输出：</strong>1
<strong>解释：</strong>第二个左括号有与之匹配的两个右括号，但是第一个左括号只有一个右括号。我们需要在字符串结尾额外增加一个 ')' 使字符串变成平衡字符串 "(())))" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "())"
<strong>输出：</strong>0
<strong>解释：</strong>字符串已经平衡了。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "))())("
<strong>输出：</strong>3
<strong>解释：</strong>添加 '(' 去匹配最开头的 '))' ，然后添加 '))' 去匹配最后一个 '(' 。
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = "(((((("
<strong>输出：</strong>12
<strong>解释：</strong>添加 12 个 ')' 得到平衡字符串。
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>s = ")))))))"
<strong>输出：</strong>5
<strong>解释：</strong>在字符串开头添加 4 个 '(' 并在结尾添加 1 个 ')' ，字符串变成平衡字符串 "(((())))))))" 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 10^5</code></li> 
 <li><code>s</code>&nbsp;只包含&nbsp;<code>'('</code> 和&nbsp;<code>')'</code>&nbsp;。</li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>贪心</li><li>字符串</li></div></div><br><div><li>👍 76</li><li>👎 0</li></div>