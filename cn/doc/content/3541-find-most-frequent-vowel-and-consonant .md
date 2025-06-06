<p>给你一个由小写英文字母（<code>'a'</code> 到 <code>'z'</code>）组成的字符串 <code>s</code>。你的任务是找出出现频率&nbsp;<strong>最高&nbsp;</strong>的元音（<code>'a'</code>、<code>'e'</code>、<code>'i'</code>、<code>'o'</code>、<code>'u'</code> 中的一个）和出现频率<strong>最高</strong>的辅音（除元音以外的所有字母），并返回这两个频率之和。</p>

<p><strong>注意</strong>：如果有多个元音或辅音具有相同的最高频率，可以任选其中一个。如果字符串中没有元音或没有辅音，则其频率视为 0。</p> 一个字母 
<code>x</code> 的&nbsp;
<strong>频率&nbsp;</strong>是它在字符串中出现的次数。

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入:</strong> <span class="example-io">s = "successes"</span></p> 
</div>

<p><strong>输出:</strong> <span class="example-io">6</span></p>

<p><strong>解释:</strong></p>

<ul> 
 <li>元音有：<code>'u'</code> 出现 1 次，<code>'e'</code> 出现 2 次。最大元音频率 = 2。</li> 
 <li>辅音有：<code>'s'</code> 出现 4 次，<code>'c'</code> 出现 2 次。最大辅音频率 = 4。</li> 
 <li>输出为 <code>2 + 4 = 6</code>。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入:</strong> <span class="example-io">s = "aeiaeia"</span></p> 
</div>

<p><strong>输出:</strong> <span class="example-io">3</span></p>

<p><strong>解释:</strong></p>

<ul> 
 <li>元音有：<code>'a'</code> 出现 3 次，<code>'e'</code> 出现 2 次，<code>'i'</code> 出现 2 次。最大元音频率 = 3。</li> 
 <li><code>s</code> 中没有辅音。因此，最大辅音频率 = 0。</li> 
 <li>输出为 <code>3 + 0 = 3</code>。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 100</code></li> 
 <li><code>s</code> 只包含小写英文字母</li> 
</ul>

<div><li>👍 1</li><li>👎 0</li></div>