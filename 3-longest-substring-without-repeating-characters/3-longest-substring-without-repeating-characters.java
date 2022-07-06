class Solution {

public int lengthOfLongestSubstring(String s) {
    
    if(s.length() == 0)             //if string is empty then return 0
        return 0;
    
    HashMap<Character,Integer> map = new HashMap<>();       //help to get the previous index of repeating character
    
    int maxCount = Integer.MIN_VALUE;                       //Store minimum value in it, can take zero also
    int count=0;                                            //a counter to count the length 
    
    for(int i=0;i<s.length();i++)
    {
        if(map.containsKey(s.charAt(i))){                   //Map contains that char then store previous index of that repeating char in i by +1
            count=1;                                        //count reinitialise to 1 and delete all the elements from map 
            i=map.get(s.charAt(i))+1;                       //to find another longest substring
            map.clear();               
        }
        else
            count++;
        
        map.put(s.charAt(i),i);                             // add char in the map with its index value
        maxCount=Math.max(count,maxCount);                  //store the longest substring length
    }
    
    return maxCount;
    
}
}