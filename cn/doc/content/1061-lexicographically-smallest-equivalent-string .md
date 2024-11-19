<p>给出长度相同的两个字符串<code>s1</code> 和&nbsp;<code>s2</code>&nbsp;，还有一个字符串&nbsp;<code>baseStr</code>&nbsp;。</p>

<p>其中 &nbsp;<code>s1[i]</code>&nbsp;和&nbsp;<code>s2[i]</code>&nbsp; 是一组等价字符。</p>

<ul> 
 <li>举个例子，如果&nbsp;<code>s1 = "abc"</code> 且&nbsp;<code>s2 = "cde"</code>，那么就有&nbsp;<code>'a' == 'c', 'b' == 'd', 'c' == 'e'</code>。</li> 
</ul>

<p>等价字符遵循任何等价关系的一般规则：</p>

<ul> 
 <li><strong>&nbsp;自反性&nbsp;</strong>：<code>'a' == 'a'</code></li> 
 <li>&nbsp;<strong>对称性&nbsp;</strong>：<code>'a' == 'b'</code> 则必定有 <code>'b' == 'a'</code></li> 
 <li>&nbsp;<strong>传递性</strong> ：<code>'a' == 'b'</code> 且 <code>'b' == 'c'</code> 就表明 <code>'a' == 'c'</code></li> 
</ul>

<p>例如，&nbsp;<code>s1 = "abc"</code>&nbsp;和&nbsp;<code>s2 = "cde"</code>&nbsp;的等价信息和之前的例子一样，那么&nbsp;<code>baseStr = "eed"</code>&nbsp;, <code>"acd"</code>&nbsp;或&nbsp;<code>"aab"</code>，这三个字符串都是等价的，而&nbsp;<code>"aab"</code>&nbsp;是&nbsp;<code>baseStr</code>&nbsp;的按字典序最小的等价字符串</p>

<p>利用<em>&nbsp;</em><code>s1</code>&nbsp;和&nbsp;<code>s2</code>&nbsp;的等价信息，找出并返回<em>&nbsp;</em><code>baseStr</code><em>&nbsp;</em>的按字典序排列最小的等价字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s1 = "parker", s2 = "morris", baseStr = "parser"
<strong>输出：</strong>"makkek"
<strong>解释：</strong>根据 <span><code>A</code></span> 和 <span><code>B 中的等价信息，</code></span>我们可以将这些字符分为 <span><code>[m,p]</code></span>, <span><code>[a,o]</code></span>, <span><code>[k,r,s]</code></span>, <span><code>[e,i] 共 4 组</code></span>。每组中的字符都是等价的，并按字典序排列。所以答案是 <span><code>"makkek"</code></span>。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s1 = "hello", s2 = "world", baseStr = "hold"
<strong>输出：</strong>"hdld"
<strong>解释：</strong>根据 <span><code>A</code></span> 和 <span><code>B 中的等价信息，</code></span>我们可以将这些字符分为 <span><code>[h,w]</code></span>, <span><code>[d,e,o]</code></span>, <span><code>[l,r] 共 3 组</code></span>。所以只有 S 中的第二个字符 <span><code>'o'</code></span> 变成 <span><code>'d'，最后答案为 </code></span><span><code>"hdld"</code></span>。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s1 = "leetcode", s2 = "programs", baseStr = "sourcecode"
<strong>输出：</strong>"aauaaaaada"
<strong>解释：</strong>我们可以把 A 和 B 中的等价字符分为 <span><code>[a,o,e,r,s,c]</code></span>, <span><code>[l,p]</code></span>, <span><code>[g,t]</code></span> 和 <span><code>[d,m] 共 4 组</code></span>，因此 <span><code>S</code></span> 中除了 <span><code>'u'</code></span> 和 <span><code>'d'</code></span> 之外的所有字母都转化成了 <span><code>'a'</code></span>，最后答案为 <span><code>"aauaaaaada"</code></span>。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s1.length, s2.length, baseStr &lt;= 1000</code></li> 
 <li><code>s1.length == s2.length</code></li> 
 <li>字符串<code>s1</code>,&nbsp;<code>s2</code>, and&nbsp;<code>baseStr</code>&nbsp;仅由从&nbsp;<code>'a'</code> 到&nbsp;<code>'z'</code>&nbsp;的小写英文字母组成。</li> 
</ul>

<div><div>Related Topics</div><div><li>并查集</li><li>字符串</li></div></div><br><div><li>👍 46</li><li>👎 0</li></div>