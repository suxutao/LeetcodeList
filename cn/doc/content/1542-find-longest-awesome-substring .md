<p>给你一个字符串 <code>s</code> 。请返回 <code>s</code> 中最长的 <strong>超赞子字符串</strong> 的长度。</p>

<p>「超赞子字符串」需满足满足下述两个条件：</p>

<ul> 
 <li>该字符串是 <code>s</code> 的一个非空子字符串</li> 
 <li>进行任意次数的字符交换后，该字符串可以变成一个回文字符串</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "3242415"
<strong>输出：</strong>5
<strong>解释：</strong>"24241" 是最长的超赞子字符串，交换其中的字符后，可以得到回文 "24142"
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "12345678"
<strong>输出：</strong>1
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "213123"
<strong>输出：</strong>6
<strong>解释：</strong>"213123" 是最长的超赞子字符串，交换其中的字符后，可以得到回文 "231132"
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = "00"
<strong>输出：</strong>2
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 10^5</code></li> 
 <li><code>s</code> 仅由数字组成</li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>哈希表</li><li>字符串</li></div></div><br><div><li>👍 108</li><li>👎 0</li></div>