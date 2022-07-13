class Solution {
    public void reverseString(char[] s) {
  //two pointers TC: o(n) SC:o(1)
    int first=0,last=s.length-1;
    while(first<last)
    {
        char ch=s[first];
        s[first]=s[last];
        s[last]=ch;
        first++;
        last--;
    }
    }
}