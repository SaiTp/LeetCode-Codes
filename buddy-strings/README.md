<h2>859. Buddy Strings</h2><h3>Easy</h3><hr><div><p>Given two strings <code>a</code> and <code>b</code>, return <code>true</code><em> if you can swap two letters in </em><code>a</code><em> so the result is equal to </em><code>b</code><em>, otherwise, return </em><code>false</code><em>.</em></p>

<p>Swapping letters is defined as taking two indices <code>i</code> and <code>j</code> (0-indexed) such that <code>i != j</code> and swapping the characters at <code>a[i]</code> and <code>b[j]</code>. For example, swapping at indices <code>0</code> and <code>2</code> in <code>"abcd"</code> results in <code>"cbad"</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> a = "ab", b = "ba"
<strong>Output:</strong> true
<strong>Explanation:</strong> You can swap a[0] = 'a' and a[1] = 'b' to get "ba", which is equal to b.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> a = "ab", b = "ab"
<strong>Output:</strong> false
<strong>Explanation:</strong> The only letters you can swap are a[0] = 'a' and a[1] = 'b', which results in "ba" != b.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> a = "aa", b = "aa"
<strong>Output:</strong> true
<strong>Explanation:</strong> You can swap a[0] = 'a' and a[1] = 'a' to get "aa", which is equal to b.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> a = "aaaaaaabc", b = "aaaaaaacb"
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>a</code> and <code>b</code> consist of lowercase letters.</li>
</ul>
</div>