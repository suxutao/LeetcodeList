<p>给你两个长度为 <code>n</code>&nbsp;的整数数组，<code>fruits</code> 和 <code>baskets</code>，其中 <code>fruits[i]</code> 表示第 <code>i</code>&nbsp;种水果的 <strong>数量</strong>，<code>baskets[j]</code> 表示第 <code>j</code>&nbsp;个篮子的 <strong>容量</strong>。</p>

<p>你需要对 <code>fruits</code> 数组从左到右按照以下规则放置水果：</p>

<ul> 
 <li>每种水果必须放入第一个 <strong>容量大于等于</strong> 该水果数量的 <strong>最左侧可用篮子</strong> 中。</li> 
 <li>每个篮子只能装 <b>一种</b> 水果。</li> 
 <li>如果一种水果 <b>无法放入</b> 任何篮子，它将保持 <b>未放置</b>。</li> 
</ul>

<p>返回所有可能分配完成后，剩余未放置的水果种类的数量。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">fruits = [4,2,5], baskets = [3,5,4]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li><code>fruits[0] = 4</code> 放入 <code>baskets[1] = 5</code>。</li> 
 <li><code>fruits[1] = 2</code> 放入 <code>baskets[0] = 3</code>。</li> 
 <li><code>fruits[2] = 5</code> 无法放入 <code>baskets[2] = 4</code>。</li> 
</ul>

<p>由于有一种水果未放置，我们返回 1。</p>

<p><strong class="example">示例 2</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">fruits = [3,6,1], baskets = [6,4,7]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">0</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li><code>fruits[0] = 3</code> 放入 <code>baskets[0] = 6</code>。</li> 
 <li><code>fruits[1] = 6</code> 无法放入 <code>baskets[1] = 4</code>（容量不足），但可以放入下一个可用的篮子 <code>baskets[2] = 7</code>。</li> 
 <li><code>fruits[2] = 1</code> 放入 <code>baskets[1] = 4</code>。</li> 
</ul>

<p>由于所有水果都已成功放置，我们返回 0。</p>

<p>&nbsp;</p>

<p><b>提示：</b></p>

<ul> 
 <li><code>n == fruits.length == baskets.length</code></li> 
 <li><code>1 &lt;= n &lt;= 100</code></li> 
 <li><code>1 &lt;= fruits[i], baskets[i] &lt;= 1000</code></li> 
</ul>

<div><div>Related Topics</div><div><li>线段树</li><li>数组</li><li>二分查找</li><li>模拟</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>