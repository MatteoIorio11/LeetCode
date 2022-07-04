class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        int[] out = new int[k];
        PriorityQueue<int[]> p = new PriorityQueue<>((a, b) -> a[0] != b[0] ? a[0] - b[0] : a[1] - b[1]);
        var soldI = 0;
        for(int i = 0; i < mat.length; i++){
            soldI = countSoldiers(mat, i);
            p.add(new int[]{soldI, i});
        }
        for(int i = 0; i < k; i++){
            out[i] = p.poll()[1];
        }
        return out;
    }
    private int countSoldiers(int[][]mat, int i){
        int start = 0;
        int end = mat[i].length;
        while (start < end) {
            int mid = (start + end) / 2;
            if (mat[i][mid] == 1) {
                start = mid + 1;
            } else end = mid;
        }
        return start;
    }
}