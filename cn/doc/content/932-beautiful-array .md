<p>如果长度为 <code>n</code> 的数组 <code>nums</code> 满足下述条件，则认为该数组是一个 <strong>漂亮数组</strong> ：</p>

<ul> 
 <li><code>nums</code> 是由范围 <code>[1, n]</code> 的整数组成的一个排列。</li> 
 <li>对于每个 <code>0 &lt;= i &lt; j &lt; n</code> ，均不存在下标 <code>k</code>（<code>i &lt; k &lt; j</code>）使得 <code>2 * nums[k] == nums[i] + nums[j]</code> 。</li> 
</ul>

<p>给你整数 <code>n</code> ，返回长度为 <code>n</code> 的任一 <strong>漂亮数组</strong> 。本题保证对于给定的 <code>n</code> 至少存在一个有效答案。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1 ：</strong></p>

<pre>
<strong>输入：</strong>n = 4
<strong>输出：</strong>[2,1,4,3]
</pre>

<p><strong class="example">示例 2 ：</strong></p>

<pre>
<strong>输入：</strong>n = 5
<strong>输出：</strong>[3,1,2,5,4]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 1000</code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数组</li><li>数学</li><li>分治</li></div></div><br><div><li>👍 235</li><li>👎 0</li></div>