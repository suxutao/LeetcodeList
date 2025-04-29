<p>给你一个二维字符串数组 <code>responses</code>，其中每个 <code>responses[i]</code> 是一个字符串数组，表示第 <code>i</code>&nbsp;天调查的回答结果。</p>

<p>请返回在对每个 <code>responses[i]</code> 中的回答&nbsp;<strong>去重</strong> 后，所有天数中&nbsp;<strong>最常见&nbsp;</strong>的回答。如果有多个回答出现频率相同，则返回&nbsp;<strong><span data-keyword="lexicographically-smaller-string">字典序最小</span>&nbsp;</strong>的那个回答。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">responses = [["good","ok","good","ok"],["ok","bad","good","ok","ok"],["good"],["bad"]]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">"good"</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>每个列表去重后，得到&nbsp;<code>responses = [["good", "ok"], ["ok", "bad", "good"], ["good"], ["bad"]]</code>。</li> 
 <li><code>"good"</code> 出现了 3 次，<code>"ok"</code> 出现了 2 次，<code>"bad"</code> 也出现了 2 次。</li> 
 <li>返回 <code>"good"</code>，因为它出现的频率最高。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">responses = [["good","ok","good"],["ok","bad"],["bad","notsure"],["great","good"]]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">"bad"</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>每个列表去重后，<code>responses = [["good", "ok"], ["ok", "bad"], ["bad", "notsure"], ["great", "good"]]</code>。</li> 
 <li><code>"bad"</code>、<code>"good"</code> 和 <code>"ok"</code> 都出现了 2 次。</li> 
 <li>返回 <code>"bad"</code>，因为它在这些最高频率的词中字典序最小。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= responses.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= responses[i].length &lt;= 1000</code></li> 
 <li><code>1 &lt;= responses[i][j].length &lt;= 10</code></li> 
 <li><code>responses[i][j]</code> 仅由小写英文字母组成</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>字符串</li><li>计数</li></div></div><br><div><li>👍 1</li><li>👎 0</li></div>