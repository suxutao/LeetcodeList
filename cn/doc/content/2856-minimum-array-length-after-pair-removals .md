<p>给你一个下标从 <strong>0</strong> 开始的 <strong>非递减</strong> 整数数组&nbsp;<code>nums</code>&nbsp;。</p>

<p>你可以执行以下操作任意次：</p>

<ul> 
 <li>选择 <strong>两个&nbsp;</strong>下标&nbsp;<code>i</code> 和&nbsp;<code>j</code>&nbsp;，满足&nbsp;<code>nums[i] &lt; nums[j]</code>&nbsp;。</li> 
 <li>将 <code>nums</code>&nbsp;中下标在&nbsp;<code>i</code> 和&nbsp;<code>j</code>&nbsp;处的元素删除。剩余元素按照原来的顺序组成新的数组，下标也重新从 <strong>0</strong>&nbsp;开始编号。</li> 
</ul>

<p>请你返回一个整数，表示执行以上操作任意次后（可以执行 <strong>0</strong> 次），<code>nums</code>&nbsp;数组的 <strong>最小</strong>&nbsp;数组长度。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [1,2,3,4]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">0</span></p>

<p><strong>解释：</strong></p>

<p><img src="https://pic.leetcode.cn/1716779983-AHhkVn-tcase1.gif" style="width: 160px; height: 70px;" /></p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [1,1,2,2,3,3]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">0</span></p>

<p><strong>解释：</strong></p>

<p><img src="https://pic.leetcode.cn/1716779979-GyQhVf-tcase2.gif" style="width: 240px; height: 70px;" /></p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [1000000000,1000000000]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">2</span></p>

<p><strong>解释：</strong></p>

<p>由于两个数字相等，不能删除它们。</p>

<p><strong class="example">示例 4：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [2,3,4,4,4]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<p><img src="https://pic.leetcode.cn/1716779940-qRRlHk-tcase3.gif" style="width: 210px; height: 70px;" /></p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>nums</code>&nbsp;是 <strong>非递减</strong>&nbsp;数组。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>双指针</li><li>二分查找</li><li>计数</li></div></div><br><div><li>👍 21</li><li>👎 0</li></div>