<p>给你一个字符串 <code>word</code>，请你使用以下算法进行压缩：</p>

<ul> 
 <li>从空字符串 <code>comp</code> 开始。当 <code>word</code> <strong>不为空</strong> 时，执行以下操作： </li>
</ul>

    <ul>
    	<li>移除 <code>word</code> 的最长单字符前缀，该前缀由单一字符 <code>c</code> 重复多次组成，且该前缀长度 <strong>最多 </strong>为 9 。</li>
    	<li>将前缀的长度和字符 <code>c</code> 追加到 <code>comp</code> 。</li>
    </ul>
    </li>


<p>返回字符串 <code>comp</code> 。</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">word = "abcde"</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">"1a1b1c1d1e"</span></p>

<p><strong>解释：</strong></p>

<p>初始时，<code>comp = ""</code> 。进行 5 次操作，每次操作分别选择 <code>"a"</code>、<code>"b"</code>、<code>"c"</code>、<code>"d"</code> 和 <code>"e"</code> 作为前缀。</p>

<p>对每个前缀，将 <code>"1"</code> 和对应的字符追加到 <code>comp</code>。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">word = "aaaaaaaaaaaaaabb"</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">"9a5a2b"</span></p>

<p><strong>解释：</strong></p>

<p>初始时，<code>comp = ""</code>。进行 3 次操作，每次操作分别选择 <code>"aaaaaaaaa"</code>、<code>"aaaaa"</code> 和 <code>"bb"</code> 作为前缀。</p>

<ul> 
 <li>对于前缀 <code>"aaaaaaaaa"</code>，将 <code>"9"</code> 和 <code>"a"</code> 追加到 <code>comp</code>。</li> 
 <li>对于前缀 <code>"aaaaa"</code>，将 <code>"5"</code> 和 <code>"a"</code> 追加到 <code>comp</code>。</li> 
 <li>对于前缀 <code>"bb"</code>，将 <code>"2"</code> 和 <code>"b"</code> 追加到 <code>comp</code>。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= word.length &lt;= 2 * 10<sup>5</sup></code></li> 
 <li><code>word</code> 仅由小写英文字母组成。</li> 
</ul>

<div><div>Related Topics</div><div><li>字符串</li></div></div><br><div><li>👍 3</li><li>👎 0</li></div>