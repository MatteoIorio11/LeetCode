class MyCalendar {
    TreeMap<Integer, Integer> tree;
    public MyCalendar() {
        tree = new TreeMap();
    }
    
    public boolean book(int start, int end) {
        Integer prev = tree.floorKey(start);
        Integer next = tree.ceilingKey(start);
        if((prev == null || tree.get(prev) <= start) && 
          (next== null || end <= next)){
            tree.put(start, end);
            return true;
        }
        return false;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */