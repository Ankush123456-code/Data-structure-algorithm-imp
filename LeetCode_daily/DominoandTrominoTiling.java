package LeetCode_daily;

public class DominoandTrominoTiling {
    public int numTilings(int n) {
        int[] arr = new int[1001];

        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 5;
        if (n <= 3) {
            return arr[n];
        }
        int mod = 1000000007;
        for (int i = 4; i <= n; i++) {
            arr[i] = (2 * arr[i - 1]) % mod + (arr[i - 3]) % mod;
            arr[i] = arr[i] % mod;
        }
        return arr[n];
    }
}
