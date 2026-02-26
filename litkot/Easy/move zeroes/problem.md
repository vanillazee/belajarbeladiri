### Problem

Given an integer array `nums`, move all `0`s to the end of it while maintaining the relative order of the non-zero elements.

**Note:**  
You must do this **in-place** without making a copy of the array.

---

### Task

Modify the given array such that all zero elements are moved to the end while preserving the order of non-zero elements.

---

### Example 1

**Input:**  
`nums = [0,1,0,3,12]`

**Output:**  
`[1,3,12,0,0]`

**Explanation:**  
All non-zero elements keep their original order, while zeros are moved to the end.

---

### Example 2

**Input:**  
`nums = [0]`

**Output:**  
`[0]`

**Explanation:**  
There is only one element, so the array remains unchanged.

---

### Constraints

- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

---

### Follow-up

Can you minimize the total number of operations done?