<p>给你一个字符串 <code>s</code> 和一个字符串数组 <code>words</code> ，请你判断 <code>s</code> 是否为 <code>words</code> 的 <strong>前缀字符串</strong> 。</p>

<p>字符串 <code>s</code> 要成为 <code>words</code> 的 <strong>前缀字符串</strong> ，需要满足：<code>s</code> 可以由 <code>words</code> 中的前 <code>k</code>（<code>k</code> 为 <strong>正数</strong> ）个字符串按顺序相连得到，且 <code>k</code> 不超过 <code>words.length</code> 。</p>

<p>如果 <code>s</code> 是 <code>words</code> 的 <strong>前缀字符串</strong> ，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "iloveleetcode", words = ["i","love","leetcode","apples"]
<strong>输出：</strong>true
<strong>解释：</strong>
s 可以由 "i"、"love" 和 "leetcode" 相连得到。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "iloveleetcode", words = ["apples","i","love","leetcode"]
<strong>输出：</strong>false
<strong>解释：</strong>
数组的前缀相连无法得到 s 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= words.length &lt;= 100</code></li> 
 <li><code>1 &lt;= words[i].length &lt;= 20</code></li> 
 <li><code>1 &lt;= s.length &lt;= 1000</code></li> 
 <li><code>words[i]</code> 和 <code>s</code> 仅由小写英文字母组成</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>双指针</li><li>字符串</li></div></div><br><div><li>👍 25</li><li>👎 0</li></div>