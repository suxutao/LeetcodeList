<p>给你一个长度为 <code>3</code> 的整数数组 <code>nums</code>。</p>

<p>现以某种顺序<strong> 连接 </strong>数组 <code>nums</code> 中所有元素的 <strong>二进制表示</strong> ，请你返回可以由这种方法形成的 <strong>最大 </strong>数值。</p>

<p><strong>注意</strong> 任何数字的二进制表示<em> </em><strong>不含</strong><em> </em>前导零。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1:</strong></p>

<div class="example-block"> 
 <p><strong>输入:</strong> <span class="example-io">nums = [1,2,3]</span></p> 
</div>

<p><strong>输出:</strong> 30</p>

<p><strong>解释:</strong></p>

<p>按照顺序 <code>[3, 1, 2]</code> 连接数字的二进制表示，得到结果 <code>"11110"</code>，这是 30 的二进制表示。</p>

<p><strong class="example">示例 2:</strong></p>

<div class="example-block"> 
 <p><strong>输入:</strong> <span class="example-io">nums = [2,8,16]</span></p> 
</div>

<p><strong>输出:</strong> 1296</p>

<p><strong>解释:</strong></p>

<p>按照顺序 <code>[2, 8, 16]</code> 连接数字的二进制表述，得到结果 <code>"10100010000"</code>，这是 1296 的二进制表示。</p>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>nums.length == 3</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 127</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>枚举</li></div></div><br><div><li>👍 3</li><li>👎 0</li></div>