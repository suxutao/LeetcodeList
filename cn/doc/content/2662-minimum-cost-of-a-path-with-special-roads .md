<p>给你一个数组 <code>start</code> ，其中 <code>start = [startX, startY]</code> 表示你的初始位置位于二维空间上的 <code>(startX, startY)</code> 。另给你一个数组 <code>target</code> ，其中 <code>target = [targetX, targetY]</code> 表示你的目标位置 <code>(targetX, targetY)</code> 。</p>

<p>从位置 <code>(x1, y1)</code> 到空间中任一其他位置 <code>(x2, y2)</code> 的 <strong>代价</strong> 是 <code>|x2 - x1| + |y2 - y1|</code> 。</p>

<p>给你一个二维数组 <code>specialRoads</code> ，表示空间中存在的一些 <strong>特殊路径</strong>。其中 <code>specialRoads[i] = [x1<sub>i</sub>, y1<sub>i</sub>, x2<sub>i</sub>, y2<sub>i</sub>, cost<sub>i</sub>]</code> 表示第 <code>i</code> 条特殊路径可以从 <code>(x1<sub>i</sub>, y1<sub>i</sub>)</code> 到 <code>(x2<sub>i</sub>, y2<sub>i</sub>)</code> ，但成本等于 <code>cost<sub>i</sub></code> 。你可以使用每条特殊路径任意次数。</p>

<p>返回从 <code>(startX, startY)</code> 到 <code>(targetX, targetY)</code> 所需的 <strong>最小</strong> 代价。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">start = [1,1], target = [4,5], specialRoads = [[1,2,3,3,2],[3,4,4,5,1]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>5</span></p>

<p><b>解释：</b></p>

<ol> 
 <li>(1,1) 到 (1,2) 花费为 |1 - 1| + |2 - 1| = 1。</li> 
 <li>(1,2) 到 (3,3)。使用&nbsp;<code><span class="example-io">specialRoads[0]</span></code><span class="example-io">&nbsp;花费为</span><span class="example-io">&nbsp;2。</span></li> 
 <li><span class="example-io">(3,3) </span>到<span class="example-io"> (3,4) </span>花费为<span class="example-io"> |3 - 3| + |4 - 3| = 1。</span></li> 
 <li><span class="example-io">(3,4) </span>到<span class="example-io"> (4,5)。</span>使用<span class="example-io"> </span><code><span class="example-io">specialRoads[1]</span></code><span class="example-io"> 花费为</span><span class="example-io"> 1。</span></li> 
</ol>

<p><span class="example-io">所以总花费是 1 + 2 + 1 + 1 = 5。</span></p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">start = [3,2], target = [5,7], specialRoads = [[5,7,3,2,1],[3,2,3,4,4],[3,3,5,5,5],[3,4,5,6,6]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b></span><span class="example-io">7</span></p>

<p><b>解释：</b></p>

<p>不使用任何特殊路径，直接从开始到结束位置是最优的，花费为&nbsp;|5 - 3| + |7 - 2| = 7。</p>

<p>注意&nbsp;<span class="example-io"><code>specialRoads[0]</code>&nbsp;直接从 (5,7) 到 (3,2)。</span></p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">start = [1,1], target = [10,4], specialRoads = [[4,2,1,1,3],[1,2,7,4,4],[10,3,6,1,2],[6,1,1,2,3]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b></span><span class="example-io">8</span></p>

<p><b>解释：</b></p>

<ol> 
 <li>(1,1) 到 (1,2) 花费为 |1 - 1| + |2 - 1| = 1。</li> 
 <li>(1,2) 到 (7,4)。使用&nbsp;<code><span class="example-io">specialRoads[1]</span></code><span class="example-io">&nbsp;花费为</span><span class="example-io">&nbsp;4。</span></li> 
 <li>(7,4) 到 (10,4) 花费为 |10 - 7| + |4 - 4| = 3。</li> 
</ol>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>start.length == target.length == 2</code></li> 
 <li><code>1 &lt;= startX &lt;= targetX &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= startY &lt;= targetY &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= specialRoads.length &lt;= 200</code></li> 
 <li><code>specialRoads[i].length == 5</code></li> 
 <li><code>startX &lt;= x1<sub>i</sub>, x2<sub>i</sub> &lt;= targetX</code></li> 
 <li><code>startY &lt;= y1<sub>i</sub>, y2<sub>i</sub> &lt;= targetY</code></li> 
 <li><code>1 &lt;= cost<sub>i</sub> &lt;= 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>图</li><li>数组</li><li>最短路</li><li>堆（优先队列）</li></div></div><br><div><li>👍 42</li><li>👎 0</li></div>