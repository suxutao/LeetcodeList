<p>给你一个整数数组 <code>nums</code>。</p>

<p><strong>特殊三元组 </strong>定义为满足以下条件的下标三元组 <code>(i, j, k)</code>：</p>

<ul> 
 <li><code>0 &lt;= i &lt; j &lt; k &lt; n</code>，其中 <code>n = nums.length</code></li> 
 <li><code>nums[i] == nums[j] * 2</code></li> 
 <li><code>nums[k] == nums[j] * 2</code></li> 
</ul>

<p>返回数组中&nbsp;<strong>特殊三元组&nbsp;</strong>的总数。</p>

<p>由于答案可能非常大，请返回结果对 <code>10<sup>9</sup> + 7</code> 取余数后的值。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [6,3,6]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<p>唯一的特殊三元组是 <code>(i, j, k) = (0, 1, 2)</code>，其中：</p>

<ul> 
 <li><code>nums[0] = 6</code>, <code>nums[1] = 3</code>, <code>nums[2] = 6</code></li> 
 <li><code>nums[0] = nums[1] * 2 = 3 * 2 = 6</code></li> 
 <li><code>nums[2] = nums[1] * 2 = 3 * 2 = 6</code></li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [0,1,0,0]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<p>唯一的特殊三元组是 <code>(i, j, k) = (0, 2, 3)</code>，其中：</p>

<ul> 
 <li><code>nums[0] = 0</code>, <code>nums[2] = 0</code>, <code>nums[3] = 0</code></li> 
 <li><code>nums[0] = nums[2] * 2 = 0 * 2 = 0</code></li> 
 <li><code>nums[3] = nums[2] * 2 = 0 * 2 = 0</code></li> 
</ul>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [8,4,2,8,4]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">2</span></p>

<p><strong>解释：</strong></p>

<p>共有两个特殊三元组：</p>

<ul> 
 <li><code>(i, j, k) = (0, 1, 3)</code> </li>
</ul>

    <ul>
    	<li><code>nums[0] = 8</code>, <code>nums[1] = 4</code>, <code>nums[3] = 8</code></li>
    	<li><code>nums[0] = nums[1] * 2 = 4 * 2 = 8</code></li>
    	<li><code>nums[3] = nums[1] * 2 = 4 * 2 = 8</code></li>
    </ul>
    </li>
    <li><code>(i, j, k) = (1, 2, 4)</code>
    <ul>
    	<li><code>nums[1] = 4</code>, <code>nums[2] = 2</code>, <code>nums[4] = 4</code></li>
    	<li><code>nums[1] = nums[2] * 2 = 2 * 2 = 4</code></li>
    	<li><code>nums[4] = nums[2] * 2 = 2 * 2 = 4</code></li>
    </ul>
    </li>


<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>3 &lt;= n == nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>计数</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>