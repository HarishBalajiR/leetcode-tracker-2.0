// Last updated: 3/30/2026, 2:12:42 PM
class MyHashSet {
    int[] s = new int[1000001];
    public MyHashSet() {
    }
    
    public void add(int key) {
        s[key] = 1;
    }
    
    public void remove(int key) {
        s[key] = 0;
    }
    
    public boolean contains(int key) {
        return s[key]==1 ? true : false;
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */