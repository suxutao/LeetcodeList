<p>给你一个字符串数组 <code>words</code> 和一个字符串 <code>target</code>。</p>

<p>如果字符串 <code>x</code> 是 <code>words</code> 中<strong> 任意 </strong>字符串的 <span data-keyword="string-prefix">前缀</span>，则认为 <code>x</code> 是一个 <strong>有效</strong> 字符串。</p>

<p>现计划通过 <strong>连接 </strong>有效字符串形成 <code>target</code> ，请你计算并返回需要连接的 <strong>最少 </strong>字符串数量。如果无法通过这种方式形成 <code>target</code>，则返回 <code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">words = ["abc","aaaaa","bcdef"], target = "aabcdabc"</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">3</span></p>

<p><strong>解释：</strong></p>

<p>target 字符串可以通过连接以下有效字符串形成：</p>

<ul> 
 <li><code>words[1]</code> 的长度为 2 的前缀，即 <code>"aa"</code>。</li> 
 <li><code>words[2]</code> 的长度为 3 的前缀，即 <code>"bcd"</code>。</li> 
 <li><code>words[0]</code> 的长度为 3 的前缀，即 <code>"abc"</code>。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">words = ["abababab","ab"], target = "ababaababa"</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">2</span></p>

<p><strong>解释：</strong></p>

<p>target 字符串可以通过连接以下有效字符串形成：</p>

<ul> 
 <li><code>words[0]</code> 的长度为 5 的前缀，即 <code>"ababa"</code>。</li> 
 <li><code>words[0]</code> 的长度为 5 的前缀，即 <code>"ababa"</code>。</li> 
</ul>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">words = ["abcdef"], target = "xyz"</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">-1</span></p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= words.length &lt;= 100</code></li> 
 <li><code>1 &lt;= words[i].length &lt;= 5 * 10<sup>3</sup></code></li> 
 <li>输入确保 <code>sum(words[i].length) &lt;= 10<sup>5</sup></code>。</li> 
 <li><code>words[i]</code> 只包含小写英文字母。</li> 
 <li><code>1 &lt;= target.length &lt;= 5 * 10<sup>3</sup></code></li> 
 <li><code>target</code> 只包含小写英文字母。</li> 
</ul>

<div><div>Related Topics</div><div><li>字典树</li><li>线段树</li><li>数组</li><li>字符串</li><li>二分查找</li><li>动态规划</li><li>字符串匹配</li><li>哈希函数</li><li>滚动哈希</li></div></div><br><div><li>👍 33</li><li>👎 0</li></div>