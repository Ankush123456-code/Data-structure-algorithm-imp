package Using_Java.Leetcode;

public class path_sum_1 {

    private static boolean dfs(TreeNode root, int t) {
        if (root == null) {
            return false;
        }
        t = t - root.val;
        if (root.left == null && root.right == null) {
            if (t == 0) {
                return true;
            }
        }
        return dfs(root.left, t) || dfs(root.right, t);
    }

    public boolean hasPathSum(TreeNode root, int targetSum) {

        return dfs(root, targetSum);
    }
}
