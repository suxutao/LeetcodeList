<p>如果字符串中不含有任何 <code>'aaa'</code>，<code>'bbb'</code> 或 <code>'ccc'</code> 这样的字符串作为子串，那么该字符串就是一个「快乐字符串」。</p>

<p>给你三个整数 <code>a</code>，<code>b</code> ，<code>c</code>，请你返回 <strong>任意一个</strong> 满足下列全部条件的字符串 <code>s</code>：</p>

<ul> 
 <li><code>s</code> 是一个尽可能长的快乐字符串。</li> 
 <li><code>s</code> 中 <strong>最多</strong> 有<code>a</code> 个字母 <code>'a'</code>、<code>b</code>&nbsp;个字母 <code>'b'</code>、<code>c</code> 个字母 <code>'c'</code> 。</li> 
 <li><code>s </code>中只含有 <code>'a'</code>、<code>'b'</code> 、<code>'c'</code> 三种字母。</li> 
</ul>

<p>如果不存在这样的字符串 <code>s</code> ，请返回一个空字符串 <code>""</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>a = 1, b = 1, c = 7
<strong>输出：</strong>"ccaccbcc"
<strong>解释：</strong>"ccbccacc" 也是一种正确答案。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>a = 2, b = 2, c = 1
<strong>输出：</strong>"aabbc"
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>a = 7, b = 1, c = 0
<strong>输出：</strong>"aabaa"
<strong>解释：</strong>这是该测试用例的唯一正确答案。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= a, b, c &lt;= 100</code></li> 
 <li><code>a + b + c &gt; 0</code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>字符串</li><li>堆（优先队列）</li></div></div><br><div><li>👍 229</li><li>👎 0</li></div>