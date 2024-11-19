<p>我们定义&nbsp;<code>arr</code>&nbsp;是 <b>山形数组</b>&nbsp;当且仅当它满足：</p>

<ul> 
 <li><code>arr.length &gt;= 3</code></li> 
 <li>存在某个下标&nbsp;<code>i</code>&nbsp;（<strong>从 0 开始</strong>）&nbsp;满足&nbsp;<code>0 &lt; i &lt; arr.length - 1</code>&nbsp;且： 
  <ul> 
   <li><code>arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i]</code></li> 
   <li><code>arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li> 
  </ul> </li> 
</ul>

<p>给你整数数组&nbsp;<code>nums</code>​ ，请你返回将 <code>nums</code>&nbsp;变成 <strong>山形状数组</strong>&nbsp;的​ <strong>最少</strong>&nbsp;删除次数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [1,3,1]
<b>输出：</b>0
<b>解释：</b>数组本身就是山形数组，所以我们不需要删除任何元素。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [2,1,1,5,6,2,3,1]
<b>输出：</b>3
<b>解释：</b>一种方法是将下标为 0，1 和 5 的元素删除，剩余元素为 [1,5,6,3,1] ，是山形数组。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>3 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li>题目保证&nbsp;<code>nums</code> 删除一些元素后一定能得到山形数组。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>二分查找</li><li>动态规划</li></div></div><br><div><li>👍 69</li><li>👎 0</li></div>