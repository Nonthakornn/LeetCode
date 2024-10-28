class Solution(object):
    def containsDuplicate(self, nums):
        if len(set(nums)) == len(nums):
            return False
        else:
            return True


"""
if __name__ == "__main__":
    sol = Solution()
    print(sol.containsDuplicate([1, 2, 3, 1]))  # Output: True
    print(sol.containsDuplicate([1, 2, 3]))     # Output: False
    print(sol.containsDuplicate([1, 1, 1, 1]))  # Output: True
    print(sol.containsDuplicate([]))            # Output: False
    print(sol.containsDuplicate([0]))           # Output: False
"""
