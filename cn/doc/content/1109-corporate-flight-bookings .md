<p>这里有&nbsp;<code>n</code>&nbsp;个航班，它们分别从 <code>1</code> 到 <code>n</code> 进行编号。</p>

<p>有一份航班预订表&nbsp;<code>bookings</code> ，表中第&nbsp;<code>i</code>&nbsp;条预订记录&nbsp;<code>bookings[i] = [first<sub>i</sub>, last<sub>i</sub>, seats<sub>i</sub>]</code>&nbsp;意味着在从 <code>first<sub>i</sub></code>&nbsp;到 <code>last<sub>i</sub></code> （<strong>包含</strong> <code>first<sub>i</sub></code> 和 <code>last<sub>i</sub></code> ）的 <strong>每个航班</strong> 上预订了 <code>seats<sub>i</sub></code>&nbsp;个座位。</p>

<p>请你返回一个长度为 <code>n</code> 的数组&nbsp;<code>answer</code>，里面的元素是每个航班预定的座位总数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
<strong>输出：</strong>[10,55,45,25,25]
<strong>解释：</strong>
航班编号        1   2   3   4   5
预订记录 1 ：   10  10
预订记录 2 ：       20  20
预订记录 3 ：       25  25  25  25
总座位数：      10  55  45  25  25
因此，answer = [10,55,45,25,25]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>bookings = [[1,2,10],[2,2,15]], n = 2
<strong>输出：</strong>[10,25]
<strong>解释：</strong>
航班编号        1   2
预订记录 1 ：   10  10
预订记录 2 ：       15
总座位数：      10  25
因此，answer = [10,25]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= bookings.length &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>bookings[i].length == 3</code></li> 
 <li><code>1 &lt;= first<sub>i</sub> &lt;= last<sub>i</sub> &lt;= n</code></li> 
 <li><code>1 &lt;= seats<sub>i</sub> &lt;= 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>前缀和</li></div></div><br><div><li>👍 521</li><li>👎 0</li></div>