<div class="title__3Vvk">
 给你一个输入字符串 (
 <code>s</code>) 和一个字符模式 (
 <code>p</code>) ，请你实现一个支持 
 <code>'?'</code> 和 
 <code>'*'</code> 匹配规则的通配符匹配：
</div>

<ul> 
 <li class="title__3Vvk"><code>'?'</code> 可以匹配任何单个字符。</li> 
 <li class="title__3Vvk"><code>'*'</code> 可以匹配任意字符序列（包括空字符序列）。</li> 
</ul>

<div class="original__bRMd"> 
 <div> 
  <p>判定匹配成功的充要条件是：字符模式必须能够 <strong>完全匹配</strong> 输入字符串（而不是部分匹配）。</p> 
 </div> 
</div> &nbsp;

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "aa", p = "a"
<strong>输出：</strong>false
<strong>解释：</strong>"a" 无法匹配 "aa" 整个字符串。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "aa", p = "*"
<strong>输出：</strong>true
<strong>解释：</strong>'*' 可以匹配任意字符串。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "cb", p = "?a"
<strong>输出：</strong>false
<strong>解释：</strong>'?' 可以匹配 'c', 但第二个 'a' 无法匹配 'b'。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= s.length, p.length &lt;= 2000</code></li> 
 <li><code>s</code> 仅由小写英文字母组成</li> 
 <li><code>p</code> 仅由小写英文字母、<code>'?'</code> 或 <code>'*'</code> 组成</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>递归</li><li>字符串</li><li>动态规划</li></div></div><br><div><li>👍 1115</li><li>👎 0</li></div>