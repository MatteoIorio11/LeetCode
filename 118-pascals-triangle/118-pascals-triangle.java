class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> out = new LinkedList<>();
        for(int row = 0; row < numRows; row++){
            out.add(new LinkedList<Integer>());
            for(int col = 0; col <= row; col++){
                if(col == 0 || col == row){
                    out.get(row).add(1);        
                }else{
                    var sum = out.get(row-1).get(col-1) + out.get(row-1).get(col);
                    out.get(row).add(sum);
                }
            }
        }
        return out;
    }
}