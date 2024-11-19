<p><strong>中位数&nbsp;</strong>是有序整数列表中的中间值。如果列表的大小是偶数，则没有中间值，中位数是两个中间值的平均值。</p>

<p>例如，<br /> <code>[2,3,4]</code> 的中位数是 <code>3</code><br /> <code>[2,3]</code> 的中位数是 <code>(2 + 3) / 2 = 2.5</code><br /> 设计一个支持以下两种操作的数据结构：</p>

<ul> 
 <li><code>void addNum(int num)</code> - 从数据流中添加一个整数到数据结构中。</li> 
 <li><code>double findMedian()</code> - 返回目前所有元素的中位数。</li> 
</ul>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：
</strong>["MedianFinder","addNum","addNum","findMedian","addNum","findMedian"]
[[],[1],[2],[],[3],[]]
<strong>输出：</strong>[null,null,null,1.50000,null,2.00000]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：
</strong>["MedianFinder","addNum","findMedian","addNum","findMedian"]
[[],[2],[],[3],[]]
<strong>输出：</strong>[null,null,2.00000,null,2.50000]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>最多会对&nbsp;<code>addNum、findMedian</code> 进行&nbsp;<code>50000</code>&nbsp;次调用。</li> 
</ul>

<p>注意：本题与主站 295 题相同：<a href="https://leetcode-cn.com/problems/find-median-from-data-stream/">https://leetcode-cn.com/problems/find-median-from-data-stream/</a></p>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>设计</li><li>双指针</li><li>数据流</li><li>排序</li><li>堆（优先队列）</li></div></div><br><div><li>👍 470</li><li>👎 0</li></div>