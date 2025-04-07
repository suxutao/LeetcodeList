<p>请你设计一个数据结构来高效管理网络路由器中的数据包。每个数据包包含以下属性：</p>

<ul> 
 <li><code>source</code>：生成该数据包的机器的唯一标识符。</li> 
 <li><code>destination</code>：目标机器的唯一标识符。</li> 
 <li><code>timestamp</code>：该数据包到达路由器的时间戳。</li> 
</ul>

<p>实现 <code>Router</code> 类：</p>

<p><code>Router(int memoryLimit)</code>：初始化路由器对象，并设置固定的内存限制。</p>

<ul> 
 <li><code>memoryLimit</code> 是路由器在任意时间点可以存储的 <strong>最大</strong> 数据包数量。</li> 
 <li>如果添加一个新数据包会超过这个限制，则必须移除 <strong>最旧的</strong> 数据包以腾出空间。</li> 
</ul>

<p><code>bool addPacket(int source, int destination, int timestamp)</code>：将具有给定属性的数据包添加到路由器。</p>

<ul> 
 <li>如果路由器中已经存在一个具有相同 <code>source</code>、<code>destination</code> 和 <code>timestamp</code> 的数据包，则视为重复数据包。</li> 
 <li>如果数据包成功添加（即不是重复数据包），返回 <code>true</code>；否则返回 <code>false</code>。</li> 
</ul>

<p><code>int[] forwardPacket()</code>：以 FIFO（先进先出）顺序转发下一个数据包。</p>

<ul> 
 <li>从存储中移除该数据包。</li> 
 <li>以数组 <code>[source, destination, timestamp]</code> 的形式返回该数据包。</li> 
 <li>如果没有数据包可以转发，则返回空数组。</li> 
</ul>

<p><code>int getCount(int destination, int startTime, int endTime)</code>：</p>

<ul> 
 <li>返回当前存储在路由器中（即尚未转发）的，且目标地址为指定 <code>destination</code> 且时间戳在范围 <code>[startTime, endTime]</code>（包括两端）内的数据包数量。</li> 
</ul>

<p><strong>注意</strong>：对于 <code>addPacket</code> 的查询会按照 <code>timestamp</code> 的递增顺序进行。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><br /> <span class="example-io">["Router", "addPacket", "addPacket", "addPacket", "addPacket", "addPacket", "forwardPacket", "addPacket", "getCount"]<br /> [[3], [1, 4, 90], [2, 5, 90], [1, 4, 90], [3, 5, 95], [4, 5, 105], [], [5, 2, 110], [5, 100, 110]]</span></p> 
</div>

<p><strong>输出：</strong><br /> <span class="example-io">[null, true, true, false, true, true, [2, 5, 90], true, 1] </span></p>

<p><strong>解释：</strong></p> 
<code>Router router = new Router(3);</code> // 初始化路由器，内存限制为 3。
<br /> 
<code>router.addPacket(1, 4, 90);</code> // 数据包被添加，返回 True。
<br /> 
<code>router.addPacket(2, 5, 90);</code> // 数据包被添加，返回 True。
<br /> 
<code>router.addPacket(1, 4, 90);</code> // 这是一个重复数据包，返回 False。
<br /> 
<code>router.addPacket(3, 5, 95);</code> // 数据包被添加，返回 True。
<br /> 
<code>router.addPacket(4, 5, 105);</code> // 数据包被添加，
<code>[1, 4, 90]</code> 被移除，因为数据包数量超过限制，返回 True。
<br /> 
<code>router.forwardPacket();</code> // 转发数据包 
<code>[2, 5, 90]</code> 并将其从路由器中移除。
<br /> 
<code>router.addPacket(5, 2, 110);</code> // 数据包被添加，返回 True。
<br /> 
<code>router.getCount(5, 100, 110);</code> // 唯一目标地址为 5 且时间在 
<code>[100, 110]</code>&nbsp;范围内的数据包是 
<code>[4, 5, 105]</code>，返回 1。

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><br /> <span class="example-io">["Router", "addPacket", "forwardPacket", "forwardPacket"]<br /> [[2], [7, 4, 90], [], []]</span></p> 
</div>

<p><strong>输出：</strong><br /> <span class="example-io">[null, true, [7, 4, 90], []] </span></p>

<p><strong>解释：</strong></p> 
<code>Router router = new Router(2);</code> // 初始化路由器，内存限制为 2。
<br /> 
<code>router.addPacket(7, 4, 90);</code> // 返回 True。
<br /> 
<code>router.forwardPacket();</code> // 返回 
<code>[7, 4, 90]</code>。
<br /> 
<code>router.forwardPacket();</code> // 没有数据包可以转发，返回 
<code>[]</code>。

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= memoryLimit &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= source, destination &lt;= 2 * 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= timestamp &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= startTime &lt;= endTime &lt;= 10<sup>9</sup></code></li> 
 <li><code>addPacket</code>、<code>forwardPacket</code> 和 <code>getCount</code> 方法的总调用次数最多为 <code>10<sup>5</sup></code>。</li> 
 <li>对于 <code>addPacket</code> 的查询，<code>timestamp</code> 按递增顺序给出。</li> 
</ul>

<div><li>👍 1</li><li>👎 0</li></div>