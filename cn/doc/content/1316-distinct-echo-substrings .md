<p>给你一个字符串&nbsp;<code>text</code> ，请你返回满足下述条件的&nbsp;<strong>不同</strong> 非空子字符串的数目：</p>

<ul> 
 <li>可以写成某个字符串与其自身相连接的形式（即，可以写为 <code>a&nbsp;+ a</code>，其中 <code>a</code> 是某个字符串）。</li> 
</ul>

<p>例如，<code>abcabc</code>&nbsp;就是&nbsp;<code>abc</code>&nbsp;和它自身连接形成的。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>text = "abcabcabc"
<strong>输出：</strong>3
<strong>解释：</strong>3 个子字符串分别为 "abcabc"，"bcabca" 和 "cabcab" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>text = "leetcodeleetcode"
<strong>输出：</strong>2
<strong>解释：</strong>2 个子字符串为 "ee" 和 "leetcodeleetcode" 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= text.length &lt;= 2000</code></li> 
 <li><code>text</code>&nbsp;只包含小写英文字母。</li> 
</ul>

<div><div>Related Topics</div><div><li>字典树</li><li>字符串</li><li>哈希函数</li><li>滚动哈希</li></div></div><br><div><li>👍 58</li><li>👎 0</li></div>