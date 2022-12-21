package LeetCode_daily;

import java.util.ArrayDeque;
import java.util.HashSet;
import java.util.List;
import java.util.Queue;

public class KeysAndRooms {
    private HashSet<Integer> vis;

    void dfs(int s, List<List<Integer>> rooms) {
        vis.add(s);
        for (int i = 0; i < rooms.get(s).size(); i++) {
            if (!vis.contains(rooms.get(s).get(i))) {
                dfs(rooms.get(s).get(i), rooms);
            }
        }
    }

    void bfs(int s, List<List<Integer>> rooms) {
        Queue<Integer> pq = new ArrayDeque<>();
        pq.offer(s);
        vis.add(s);
        while (!pq.isEmpty()) {
            List<Integer> root = rooms.get(pq.poll());
            for (var val : root) {
                if (vis.contains(val)) {
                    continue;
                }
                vis.add(val);
                pq.offer(val);
            }

        }
    }

    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        vis = new HashSet<>();
        int n = rooms.size();
//        dfs(0, rooms);
        bfs(0, rooms);
        for (int i = 0; i < n; i++) {
            if (!vis.contains(i))
                return false;
        }
        return true;

    }
}
