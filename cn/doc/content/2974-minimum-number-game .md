<p>你有一个下标从 <strong>0</strong> 开始、长度为 <strong>偶数</strong> 的整数数组 <code>nums</code> ，同时还有一个空数组 <code>arr</code> 。Alice 和 Bob 决定玩一个游戏，游戏中每一轮 Alice 和 Bob 都会各自执行一次操作。游戏规则如下：</p>

<ul> 
 <li>每一轮，Alice 先从 <code>nums</code> 中移除一个<strong> 最小</strong> 元素，然后 Bob 执行同样的操作。</li> 
 <li>接着，Bob 会将移除的元素添加到数组 <code>arr</code> 中，然后 Alice 也执行同样的操作。</li> 
 <li>游戏持续进行，直到 <code>nums</code> 变为空。</li> 
</ul>

<p>返回结果数组 <code>arr</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,4,2,3]
<strong>输出：</strong>[3,2,5,4]
<strong>解释：</strong>第一轮，Alice 先移除 2 ，然后 Bob 移除 3 。然后 Bob 先将 3 添加到 arr 中，接着 Alice 再将 2 添加到 arr 中。于是 arr = [3,2] 。
第二轮开始时，nums = [5,4] 。Alice 先移除 4 ，然后 Bob 移除 5 。接着他们都将元素添加到 arr 中，arr 变为 [3,2,5,4] 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,5]
<strong>输出：</strong>[5,2]
<strong>解释：</strong>第一轮，Alice 先移除 2 ，然后 Bob 移除 5 。然后 Bob 先将 5 添加到 arr 中，接着 Alice 再将 2 添加到 arr 中。于是 arr = [5,2] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 100</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 100</code></li> 
 <li><code>nums.length % 2 == 0</code></li> 
</ul>

<div><div>Related Topics</div><div><li>排序</li><li>数组</li><li>模拟</li><li>堆（优先队列）</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>