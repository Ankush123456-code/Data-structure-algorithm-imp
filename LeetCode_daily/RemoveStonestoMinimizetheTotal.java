package LeetCode_daily;

import java.util.Collections;
import java.util.PriorityQueue;

public class RemoveStonestoMinimizetheTotal {
    class Solution {
        public int minStoneSum(int[] piles, int k) {
            PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
            for (int i = 0; i < piles.length; i++) {
                pq.offer(piles[i]);
            }
            int ans = 0;
            while (k != 0) {
                int top = pq.peek() % 2 == 0 ? pq.poll() / 2 : pq.poll() / 2 + 1;
                pq.offer(top);
                k--;
            }
            while (!pq.isEmpty()) {
                ans += pq.poll();
            }
            return ans;
        }
    }
}
