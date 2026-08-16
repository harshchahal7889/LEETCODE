import java.util.ArrayList;
import java.util.List;

class Solution {

    public static void main(String[] args) {
        System.out.println(new Solution().winnerSquareGame(3));
    }
    public boolean winnerSquareGame(int n) {
        List<Integer> list = new ArrayList<>();

        for(int i=1;i*i<=n;i++){
            list.add(i*i);
        }

        Boolean dp[][] = new Boolean[n+1][2];
        return solve(0, n, list, list.size(), dp);
    }

    private boolean solve(int turn, int n, List<Integer> list, int size, Boolean dp[][]){
        if(n==0) return turn == 1;
        
        if(dp[n][turn] !=null) return dp[n][turn];
        for(int i=0;i<size && list.get(i) <= n;i++){
            if(turn ==0 && solve(1, n-list.get(i), list, size, dp)){
                return dp[n][turn]= true;
            }

            if(turn ==1 && !solve(0, n - list.get(i), list, size, dp)){
                return dp[n][turn] = false;
            }
        }

        return dp[n][turn] = turn == 1;
    }
}