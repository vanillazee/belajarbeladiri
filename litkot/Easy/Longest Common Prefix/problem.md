### Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

---

### Task

Given an array of strings `strs`, return the longest common prefix among all strings.

If no common prefix exists, return an empty string.

---

### Example 1

**Input:**  
`strs = ["flower","flow","flight"]`

**Output:**  
`"fl"`

**Explanation:**  
The prefix `"fl"` is common at the beginning of all strings.

---

### Example 2

**Input:**  
`strs = ["dog","racecar","car"]`

**Output:**  
`""`

**Explanation:**  
There is no common prefix among the input strings.

---

### Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters if it is non-empty.