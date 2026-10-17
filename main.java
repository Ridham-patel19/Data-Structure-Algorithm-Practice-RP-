public class main {

    // Binary Tree Node
    static class TreeNode {

        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    // Solution
    static class Solution {

        public TreeNode bstFromPreorder(int[] preorder) {

            int[] index = {0};

            return build(
                    preorder,
                    index,
                    Integer.MIN_VALUE,
                    Integer.MAX_VALUE
            );
        }

        private TreeNode build(
                int[] preorder,
                int[] index,
                int lower,
                int upper
        ) {

            // No elements left
            if (index[0] == preorder.length) {
                return null;
            }

            // Current value
            int value = preorder[index[0]];

            // Value doesn't belong to this subtree
            if (value <= lower || value >= upper) {
                return null;
            }

            // Create node
            TreeNode root = new TreeNode(value);

            // Consume current value
            index[0]++;

            // Build left subtree
            root.left = build(
                    preorder,
                    index,
                    lower,
                    value
            );

            // Build right subtree
            root.right = build(
                    preorder,
                    index,
                    value,
                    upper
            );

            return root;
        }
    }

    // Print tree in preorder
    static void printPreorder(TreeNode root) {

        if (root == null) {
            return;
        }

        System.out.print(root.val + " ");

        printPreorder(root.left);
        printPreorder(root.right);
    }

    public static void main(String[] args) {

        int[] preorder = {8, 5, 1, 7, 10, 12};

        Solution solution = new Solution();

        TreeNode root = solution.bstFromPreorder(preorder);

        System.out.println("Constructed tree (Preorder):");

        printPreorder(root);
    }
}