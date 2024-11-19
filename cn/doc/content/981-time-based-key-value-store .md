<p>设计一个基于时间的键值数据结构，该结构可以在不同时间戳存储对应同一个键的多个值，并针对特定时间戳检索键对应的值。</p>

<p>实现 <code>TimeMap</code> 类：</p>

<ul> 
 <li><code>TimeMap()</code> 初始化数据结构对象</li> 
 <li><code>void set(String key, String value, int timestamp)</code> 存储给定时间戳&nbsp;<code>timestamp</code>&nbsp;时的键&nbsp;<code>key</code>&nbsp;和值&nbsp;<code>value</code>。</li> 
 <li><code>String get(String key, int timestamp)</code>&nbsp;返回一个值，该值在之前调用了 <code>set</code>，其中&nbsp;<code>timestamp_prev &lt;= timestamp</code>&nbsp;。如果有多个这样的值，它将返回与最大 &nbsp;<code>timestamp_prev</code>&nbsp;关联的值。如果没有值，则返回空字符串（<code>""</code>）。</li> 
</ul> &nbsp;

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
<strong>输出：</strong>
[null, null, "bar", "bar", null, "bar2", "bar2"]

<strong>解释：</strong>
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);  // 存储键 "foo" 和值 "bar" ，时间戳 timestamp = 1 &nbsp; 
timeMap.get("foo", 1);         // 返回 "bar"
timeMap.get("foo", 3);         // 返回 "bar", 因为在时间戳 3 和时间戳 2 处没有对应 "foo" 的值，所以唯一的值位于时间戳 1 处（即 "bar"） 。
timeMap.set("foo", "bar2", 4); // 存储键 "foo" 和值 "bar2" ，时间戳 timestamp = 4&nbsp; 
timeMap.get("foo", 4);         // 返回 "bar2"
timeMap.get("foo", 5);         // 返回 "bar2"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= key.length, value.length &lt;= 100</code></li> 
 <li><code>key</code> 和 <code>value</code> 由小写英文字母和数字组成</li> 
 <li><code>1 &lt;= timestamp &lt;= 10<sup>7</sup></code></li> 
 <li><code>set</code> 操作中的时间戳 <code>timestamp</code> 都是严格递增的</li> 
 <li>最多调用&nbsp;<code>set</code> 和 <code>get</code> 操作 <code>2 * 10<sup>5</sup></code> 次</li> 
</ul>

<div><div>Related Topics</div><div><li>设计</li><li>哈希表</li><li>字符串</li><li>二分查找</li></div></div><br><div><li>👍 234</li><li>👎 0</li></div>