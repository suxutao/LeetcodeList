<p>请你设计一个管理 <code>n</code>&nbsp;个座位预约的系统，座位编号从&nbsp;<code>1</code>&nbsp;到&nbsp;<code>n</code>&nbsp;。</p>

<p>请你实现&nbsp;<code>SeatManager</code>&nbsp;类：</p>

<ul> 
 <li><code>SeatManager(int n)</code>&nbsp;初始化一个&nbsp;<code>SeatManager</code>&nbsp;对象，它管理从 <code>1</code>&nbsp;到 <code>n</code>&nbsp;编号的&nbsp;<code>n</code>&nbsp;个座位。所有座位初始都是可预约的。</li> 
 <li><code>int reserve()</code>&nbsp;返回可以预约座位的&nbsp;<strong>最小编号</strong>&nbsp;，此座位变为不可预约。</li> 
 <li><code>void unreserve(int seatNumber)</code>&nbsp;将给定编号&nbsp;<code>seatNumber</code>&nbsp;对应的座位变成可以预约。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
["SeatManager", "reserve", "reserve", "unreserve", "reserve", "reserve", "reserve", "reserve", "unreserve"]
[[5], [], [], [2], [], [], [], [], [5]]
<strong>输出：</strong>
[null, 1, 2, null, 2, 3, 4, 5, null]

<strong>解释：</strong>
SeatManager seatManager = new SeatManager(5); // 初始化 SeatManager ，有 5 个座位。
seatManager.reserve();    // 所有座位都可以预约，所以返回最小编号的座位，也就是 1 。
seatManager.reserve();    // 可以预约的座位为 [2,3,4,5] ，返回最小编号的座位，也就是 2 。
seatManager.unreserve(2); // 将座位 2 变为可以预约，现在可预约的座位为 [2,3,4,5] 。
seatManager.reserve();    // 可以预约的座位为 [2,3,4,5] ，返回最小编号的座位，也就是 2 。
seatManager.reserve();    // 可以预约的座位为 [3,4,5] ，返回最小编号的座位，也就是 3 。
seatManager.reserve();    // 可以预约的座位为 [4,5] ，返回最小编号的座位，也就是 4 。
seatManager.reserve();    // 唯一可以预约的是座位 5 ，所以返回 5 。
seatManager.unreserve(5); // 将座位 5 变为可以预约，现在可预约的座位为 [5] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= seatNumber &lt;= n</code></li> 
 <li>每一次对&nbsp;<code>reserve</code>&nbsp;的调用，题目保证至少存在一个可以预约的座位。</li> 
 <li>每一次对&nbsp;<code>unreserve</code>&nbsp;的调用，题目保证&nbsp;<code>seatNumber</code>&nbsp;在调用函数前都是被预约状态。</li> 
 <li>对&nbsp;<code>reserve</code> 和&nbsp;<code>unreserve</code>&nbsp;的调用&nbsp;<strong>总共</strong>&nbsp;不超过&nbsp;<code>10<sup>5</sup></code>&nbsp;次。</li> 
</ul>

<div><div>Related Topics</div><div><li>设计</li><li>堆（优先队列）</li></div></div><br><div><li>👍 35</li><li>👎 0</li></div>