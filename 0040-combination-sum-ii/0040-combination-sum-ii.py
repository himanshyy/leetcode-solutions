class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        result=[]
        def backtracking(start,target,path):
            if target == 0:
                result.append(path[:])
                return
            if target < 0:
                return
            for i in range(start,len(candidates)):
                if i > start and candidates[i] == candidates[i-1]:
                    continue
                path.append(candidates[i])
                backtracking(i+1,target-candidates[i],path)
                path.pop()
        backtracking(0,target,[])
        return result        

                    
        