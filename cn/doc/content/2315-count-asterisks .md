<p>给你一个字符串&nbsp;<code>s</code>&nbsp;，每&nbsp;<strong>两个</strong>&nbsp;连续竖线&nbsp;<code>'|'</code>&nbsp;为 <strong>一对</strong>&nbsp;。换言之，第一个和第二个&nbsp;<code>'|'</code>&nbsp;为一对，第三个和第四个&nbsp;<code>'|'</code>&nbsp;为一对，以此类推。</p>

<p>请你返回 <strong>不在</strong> 竖线对之间，<code>s</code>&nbsp;中&nbsp;<code>'*'</code>&nbsp;的数目。</p>

<p><strong>注意</strong>，每个竖线&nbsp;<code>'|'</code>&nbsp;都会 <strong>恰好</strong>&nbsp;属于一个对。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>s = "l|*e*et|c**o|*de|"
<b>输出：</b>2
<b>解释：</b>不在竖线对之间的字符加粗加斜体后，得到字符串："<strong><em>l</em></strong>|*e*et|<strong><em>c**o</em></strong>|*de|" 。
第一和第二条竖线 '|' 之间的字符不计入答案。
同时，第三条和第四条竖线 '|' 之间的字符也不计入答案。
不在竖线对之间总共有 2 个星号，所以我们返回 2 。</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>s = "iamprogrammer"
<b>输出：</b>0
<b>解释：</b>在这个例子中，s 中没有星号。所以返回 0 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>s = "yo|uar|e**|b|e***au|tifu|l"
<b>输出：</b>5
<b>解释：</b>需要考虑的字符加粗加斜体后："<strong><em>yo</em></strong>|uar|<strong><em>e**</em></strong>|b|<strong><em>e***au</em></strong>|tifu|<strong><em>l</em></strong>" 。不在竖线对之间总共有 5 个星号。所以我们返回 5 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 1000</code></li> 
 <li><code>s</code>&nbsp;只包含小写英文字母，竖线&nbsp;<code>'|'</code>&nbsp;和星号&nbsp;<code>'*'</code>&nbsp;。</li> 
 <li><code>s</code>&nbsp;包含 <strong>偶数</strong>&nbsp;个竖线&nbsp;<code>'|'</code> 。</li> 
</ul>

<div><div>Related Topics</div><div><li>字符串</li></div></div><br><div><li>👍 59</li><li>👎 0</li></div>