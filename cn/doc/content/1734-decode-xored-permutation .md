<p>给你一个整数数组&nbsp;<code>perm</code>&nbsp;，它是前&nbsp;<code>n</code>&nbsp;个正整数的排列，且&nbsp;<code>n</code>&nbsp;是个 <strong>奇数</strong>&nbsp;。</p>

<p>它被加密成另一个长度为 <code>n - 1</code>&nbsp;的整数数组&nbsp;<code>encoded</code>&nbsp;，满足&nbsp;<code>encoded[i] = perm[i] XOR perm[i + 1]</code>&nbsp;。比方说，如果&nbsp;<code>perm = [1,3,2]</code>&nbsp;，那么&nbsp;<code>encoded = [2,1]</code>&nbsp;。</p>

<p>给你&nbsp;<code>encoded</code>&nbsp;数组，请你返回原始数组&nbsp;<code>perm</code>&nbsp;。题目保证答案存在且唯一。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>encoded = [3,1]
<b>输出：</b>[1,2,3]
<b>解释：</b>如果 perm = [1,2,3] ，那么 encoded = [1 XOR 2,2 XOR 3] = [3,1]
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>encoded = [6,5,4,6]
<b>输出：</b>[2,4,1,5,3]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>3 &lt;= n &lt;&nbsp;10<sup>5</sup></code></li> 
 <li><code>n</code>&nbsp;是奇数。</li> 
 <li><code>encoded.length == n - 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li></div></div><br><div><li>👍 176</li><li>👎 0</li></div>