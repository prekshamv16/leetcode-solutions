# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

We use two loops to check every possible pair of elements.
If the sum of two elements is equal to the target, their
indices are returned.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The array can contain duplicate values, so we check pairs
using different indices.