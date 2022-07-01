class Solution {
    public String convert(String s, int numRows) {
        String[][] matrix = new String[s.length()][numRows];
        var ch = 0;
for(int i = 0; i < s.length() && ch < s.length(); i++){
            for(int j = 0; j < numRows && ch < s.length(); j++){
                matrix[i][j] = String.valueOf(s.charAt(ch));
                System.out.print(matrix[i][j] + " ");
                ch++;
            }
            for(int j = numRows-2; j >= 1 && ch < s.length(); j--){
                i++;
                matrix[i][j] = String.valueOf(s.charAt(ch));
                System.out.print(matrix[i][j] + " ");
                ch++;
            }
            System.out.println();
        }
        String out = "";
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < s.length(); j++){
                if(matrix[j][i] != null){
                    out += matrix[j][i];
                }
            }
        }       
        return out;
    }
}