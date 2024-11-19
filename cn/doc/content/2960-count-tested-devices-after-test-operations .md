<p>给你一个长度为 <code>n</code> 、下标从<strong> 0 </strong>开始的整数数组 <code>batteryPercentages</code> ，表示 <code>n</code> 个设备的电池百分比。</p>

<p>你的任务是按照顺序测试每个设备 <code>i</code>，执行以下测试操作：</p>

<ul> 
 <li>如果 <code>batteryPercentages[i]</code> <strong>大于</strong> <code>0</code>： </li>
</ul>

    <ul>
    	<li><strong>增加</strong> 已测试设备的计数。</li>
    	<li>将下标在 <code>[i + 1, n - 1]</code> 的所有设备的电池百分比减少 <code>1</code>，确保它们的电池百分比<strong> 不会低于</strong> <code>0</code> ，即 <code>batteryPercentages[j] = max(0, batteryPercentages[j] - 1)</code>。</li>
    	<li>移动到下一个设备。</li>
    </ul>
    </li>
    <li>否则，移动到下一个设备而不执行任何测试。</li>


<p>返回一个整数，表示按顺序执行测试操作后 <strong>已测试设备</strong> 的数量。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>batteryPercentages = [1,1,2,1,3]
<strong>输出：</strong>3
<strong>解释：</strong>按顺序从设备 0 开始执行测试操作：
在设备 0 上，batteryPercentages[0] &gt; 0 ，现在有 1 个已测试设备，batteryPercentages 变为 [1,0,1,0,2] 。
在设备 1 上，batteryPercentages[1] == 0 ，移动到下一个设备而不进行测试。
在设备 2 上，batteryPercentages[2] &gt; 0 ，现在有 2 个已测试设备，batteryPercentages 变为 [1,0,1,0,1] 。
在设备 3 上，batteryPercentages[3] == 0 ，移动到下一个设备而不进行测试。
在设备 4 上，batteryPercentages[4] &gt; 0 ，现在有 3 个已测试设备，batteryPercentages 保持不变。
因此，答案是 3 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>batteryPercentages = [0,1,2]
<strong>输出：</strong>2
<strong>解释：</strong>按顺序从设备 0 开始执行测试操作：
在设备 0 上，batteryPercentages[0] == 0 ，移动到下一个设备而不进行测试。
在设备 1 上，batteryPercentages[1] &gt; 0 ，现在有 1 个已测试设备，batteryPercentages 变为 [0,1,1] 。
在设备 2 上，batteryPercentages[2] &gt; 0 ，现在有 2 个已测试设备，batteryPercentages 保持不变。
因此，答案是 2 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n == batteryPercentages.length &lt;= 100 </code></li> 
 <li><code>0 &lt;= batteryPercentages[i] &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>模拟</li></div></div><br><div><li>👍 7</li><li>👎 0</li></div>