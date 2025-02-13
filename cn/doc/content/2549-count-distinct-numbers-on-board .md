<p>给你一个正整数 <code>n</code> ，开始时，它放在桌面上。在 <code>10<sup>9</sup></code> 天内，每天都要执行下述步骤：</p>

<ul> 
 <li>对于出现在桌面上的每个数字 <code>x</code> ，找出符合 <code>1 &lt;= i &lt;= n</code> 且满足 <code>x % i == 1</code> 的所有数字 <code>i</code> 。</li> 
 <li>然后，将这些数字放在桌面上。</li> 
</ul>

<p>返回在 <code>10<sup>9</sup></code> 天之后，出现在桌面上的 <strong>不同</strong> 整数的数目。</p>

<p><strong>注意：</strong></p>

<ul> 
 <li>一旦数字放在桌面上，则会一直保留直到结束。</li> 
 <li><code>%</code> 表示取余运算。例如，<code>14 % 3</code> 等于 <code>2</code> 。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 5
<strong>输出：</strong>4
<strong>解释：</strong>最开始，5 在桌面上。 
第二天，2 和 4 也出现在桌面上，因为 5 % 2 == 1 且 5 % 4 == 1 。 
再过一天 3 也出现在桌面上，因为 4 % 3 == 1 。 
在十亿天结束时，桌面上的不同数字有 2 、3 、4 、5 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 3 
<strong>输出：</strong>2
<strong>解释：</strong> 
因为 3 % 2 == 1 ，2 也出现在桌面上。 
在十亿天结束时，桌面上的不同数字只有两个：2 和 3 。 
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>数学</li><li>模拟</li></div></div><br><div><li>👍 23</li><li>👎 0</li></div>