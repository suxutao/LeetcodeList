<p>如果字符串 <code>s</code> 中 <strong>不存在</strong> 两个不同字符 <strong>频次</strong> 相同的情况，就称 <code>s</code> 是 <strong>优质字符串</strong> 。</p>

<p>给你一个字符串 <code>s</code>，返回使 <code>s</code> 成为 <strong>优质字符串</strong> 需要删除的 <strong>最小</strong> 字符数。</p>

<p>字符串中字符的 <strong>频次</strong> 是该字符在字符串中的出现次数。例如，在字符串 <code>"aab"</code> 中，<code>'a'</code> 的频次是 <code>2</code>，而 <code>'b'</code> 的频次是 <code>1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "aab"
<strong>输出：</strong>0
<strong>解释：</strong><span><code>s</code></span> 已经是优质字符串。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "aaabbbcc"
<strong>输出：</strong>2
<strong>解释：</strong>可以删除两个 'b' , 得到优质字符串 "aaabcc" 。
另一种方式是删除一个 'b' 和一个 'c' ，得到优质字符串 "aaabbc" 。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "ceabaacb"
<strong>输出：</strong>2
<strong>解释：</strong>可以删除两个 'c' 得到优质字符串 "eabaab" 。
注意，只需要关注结果字符串中仍然存在的字符。（即，频次为 0 的字符会忽略不计。）
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>s</code> 仅含小写英文字母</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>哈希表</li><li>字符串</li><li>排序</li></div></div><br><div><li>👍 69</li><li>👎 0</li></div>