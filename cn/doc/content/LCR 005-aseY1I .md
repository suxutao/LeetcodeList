<p>给定一个字符串数组&nbsp;<code>words</code>，请计算当两个字符串 <code>words[i]</code> 和 <code>words[j]</code> 不包含相同字符时，它们长度的乘积的最大值。假设字符串中只包含英语的小写字母。如果没有不包含相同字符的一对字符串，返回 0。</p>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1:</strong></p>

<pre>
<strong>输入:</strong> words = <span><code>["abcw","baz","foo","bar","fxyz","abcdef"]</code></span>
<strong>输出: </strong><span><code>16 
<strong>解释:</strong> 这两个单词为<strong> </strong></code></span><span><code>"abcw", "fxyz"</code></span>。它们不包含相同字符，且长度的乘积最大。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> words = <span><code>["a","ab","abc","d","cd","bcd","abcd"]</code></span>
<strong>输出: </strong><span><code>4 
<strong>解释: </strong></code></span>这两个单词为 <span><code>"ab", "cd"</code></span>。</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入:</strong> words = <span><code>["a","aa","aaa","aaaa"]</code></span>
<strong>输出: </strong><span><code>0 
<strong>解释: </strong>不存在这样的两个单词。</code></span>
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= words.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= words[i].length &lt;= 1000</code></li> 
 <li><code>words[i]</code>&nbsp;仅包含小写字母</li> 
</ul>

<p>&nbsp;</p>

<p>
 <meta charset="UTF-8" />注意：本题与主站 318&nbsp;题相同：<a href="https://leetcode-cn.com/problems/maximum-product-of-word-lengths/">https://leetcode-cn.com/problems/maximum-product-of-word-lengths/</a></p>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>字符串</li></div></div><br><div><li>👍 151</li><li>👎 0</li></div>