<p>给你两个整数：<code>num1</code> 和 <code>num2</code> 。</p>

<p>在一步操作中，你需要从范围&nbsp;<code>[0, 60]</code> 中选出一个整数 <code>i</code> ，并从 <code>num1</code> 减去 <code>2<sup>i</sup> + num2</code> 。</p>

<p>请你计算，要想使 <code>num1</code> 等于 <code>0</code> 需要执行的最少操作数，并以整数形式返回。</p>

<p>如果无法使 <code>num1</code> 等于 <code>0</code> ，返回 <code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num1 = 3, num2 = -2
<strong>输出：</strong>3
<strong>解释：</strong>可以执行下述步骤使 3 等于 0 ：
- 选择 i = 2 ，并从 3 减去 2<sup>2</sup> + (-2) ，num1 = 3 - (4 + (-2)) = 1 。
- 选择 i = 2 ，并从 1 减去 2<sup>2</sup> + (-2) ，num1 = 1 - (4 + (-2)) = -1 。
- 选择 i = 0 ，并从 -1 减去 2<sup>0</sup>&nbsp;+ (-2) ，num1 = (-1) - (1 + (-2)) = 0 。
可以证明 3 是需要执行的最少操作数。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num1 = 5, num2 = 7
<strong>输出：</strong>-1
<strong>解释：</strong>可以证明，执行操作无法使 5 等于 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= num1 &lt;= 10<sup>9</sup></code></li> 
 <li><code>-10<sup>9</sup>&nbsp;&lt;= num2 &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>脑筋急转弯</li></div></div><br><div><li>👍 29</li><li>👎 0</li></div>