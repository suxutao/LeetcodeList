<p>给你一个二维整数数组 <code>properties</code>，其维度为 <code>n x m</code>，以及一个整数 <code>k</code>。</p>

<p>定义一个函数 <code>intersect(a, b)</code>，它返回数组 <code>a</code> 和 <code>b</code> 中<strong> 共有的不同整数的数量 </strong>。</p>

<p>构造一个 <strong>无向图</strong>，其中每个索引 <code>i</code> 对应 <code>properties[i]</code>。如果且仅当 <code>intersect(properties[i], properties[j]) &gt;= k</code>（其中 <code>i</code> 和 <code>j</code> 的范围为 <code>[0, n - 1]</code> 且 <code>i != j</code>），节点 <code>i</code> 和节点 <code>j</code> 之间有一条边。</p>

<p>返回结果图中<strong> 连通分量 </strong>的数量。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">properties = [[1,2],[1,1],[3,4],[4,5],[5,6],[7,7]], k = 1</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">3</span></p>

<p><strong>解释：</strong></p>

<p>生成的图有 3 个连通分量：</p>

<p><img src="https://pic.leetcode.cn/1742665594-CDVPWz-image.png" style="width: 279px; height: 171px;" /></p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">properties = [[1,2,3],[2,3,4],[4,3,5]], k = 2</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<p>生成的图有 1 个连通分量：</p>

<p><img alt="" src="https://pic.leetcode.cn/1742665565-NzYlYH-screenshot-from-2025-02-27-23-58-34.png" style="width: 219px; height: 171px;" /></p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">properties = [[1,1],[1,1]], k = 2</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">2</span></p>

<p><strong>解释：</strong></p>

<p><code>intersect(properties[0], properties[1]) = 1</code>，小于 <code>k</code>。因此在图中 <code>properties[0]</code> 和 <code>properties[1]</code> 之间没有边。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n == properties.length &lt;= 100</code></li> 
 <li><code>1 &lt;= m == properties[i].length &lt;= 100</code></li> 
 <li><code>1 &lt;= properties[i][j] &lt;= 100</code></li> 
 <li><code>1 &lt;= k &lt;= m</code></li> 
</ul>

<div><li>👍 2</li><li>👎 0</li></div>