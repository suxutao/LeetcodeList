<p>给你一个长度为 <code>n</code> 的 <strong>整数</strong> 数组 <code>pref</code> 。找出并返回满足下述条件且长度为 <code>n</code> 的数组<em> </em><code>arr</code> ：</p>

<ul> 
 <li><code>pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]</code>.</li> 
</ul>

<p>注意 <code>^</code> 表示 <strong>按位异或</strong>（bitwise-xor）运算。</p>

<p>可以证明答案是 <strong>唯一</strong> 的。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>pref = [5,2,0,3,1]
<strong>输出：</strong>[5,7,2,3,2]
<strong>解释：</strong>从数组 [5,7,2,3,2] 可以得到如下结果：
- pref[0] = 5
- pref[1] = 5 ^ 7 = 2
- pref[2] = 5 ^ 7 ^ 2 = 0
- pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3
- pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>pref = [13]
<strong>输出：</strong>[13]
<strong>解释：</strong>pref[0] = arr[0] = 13
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= pref.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= pref[i] &lt;= 10<sup>6</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li></div></div><br><div><li>👍 23</li><li>👎 0</li></div>