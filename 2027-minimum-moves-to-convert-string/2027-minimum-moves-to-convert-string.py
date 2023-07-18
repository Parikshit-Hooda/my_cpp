class Solution:
    def minimumMoves(self, s: str) -> int:
        ind, moves = 0, 0
        n = len(s)
        while ind < n:
            if s[ind] == 'X':
                ind += 3
                moves += 1
            else:
                ind += 1
        return moves