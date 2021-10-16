from heapq import *
class Solution:
    def kthSmallest(self, arr, l, r, k):
        heap = []
        for item in arr[:k]:
            heappush(heap, -item)
        
        for item in arr[k:]:
            if item < -heap[0]:
                heappush(heap, -item)
                heappop(heap)
        
        temp = heappop(heap)
        return -temp