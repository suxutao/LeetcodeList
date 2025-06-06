<p>冬季已经来临。&nbsp;你的任务是设计一个有固定加热半径的供暖器向所有房屋供暖。</p>

<p>在加热器的加热半径范围内的每个房屋都可以获得供暖。</p>

<p>现在，给出位于一条水平线上的房屋&nbsp;<code>houses</code> 和供暖器&nbsp;<code>heaters</code> 的位置，请你找出并返回可以覆盖所有房屋的最小加热半径。</p>

<p><b>注意</b>：所有供暖器 <code>heaters</code> 都遵循你的半径标准，加热的半径也一样。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> houses = [1,2,3], heaters = [2]
<strong>输出:</strong> 1
<strong>解释:</strong> 仅在位置 2 上有一个供暖器。如果我们将加热半径设为 1，那么所有房屋就都能得到供暖。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> houses = [1,2,3,4], heaters = [1,4]
<strong>输出:</strong> 1
<strong>解释:</strong> 在位置 1, 4 上有两个供暖器。我们需要将加热半径设为 1，这样所有房屋就都能得到供暖。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>houses = [1,5], heaters = [2]
<strong>输出：</strong>3
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= houses.length, heaters.length &lt;= 3 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= houses[i], heaters[i] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>双指针</li><li>二分查找</li><li>排序</li></div></div><br><div><li>👍 480</li><li>👎 0</li></div>