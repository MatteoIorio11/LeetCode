class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> out = new LinkedList<>();
        for(int i = 0; i < numRows; i++){
            out.add(new LinkedList<Integer>());
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    out.get(i).add(1);
                }else{
                    var sum = out.get(i-1).get(j-1) + out.get(i-1).get(j);
                    out.get(i).add(sum);
                }
            }
        }
        return out;
    }
}