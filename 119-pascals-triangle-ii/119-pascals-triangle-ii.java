class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<List<Integer>> triangle = new LinkedList<>();
        for(int row = 0; row <= rowIndex; row++){
            triangle.add(new LinkedList<Integer>());
            for(int ele = 0; ele <= row;ele++){
                if(ele == 0 || ele == row){
                    triangle.get(row).add(1);
                }else{
                    var sum = triangle.get(row-1).get(ele-1)+triangle.get(row-1).get(ele);
                    triangle.get(row).add(sum);
                }
            }
        }
        return triangle.get(rowIndex);
    }
}