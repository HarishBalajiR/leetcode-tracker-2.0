// Last updated: 3/30/2026, 2:13:29 PM
class MedianFinder {
    PriorityQueue<Integer> minheap,maxheap;
    public MedianFinder() {
        minheap = new PriorityQueue<>();
        maxheap = new PriorityQueue<>(Collections.reverseOrder());
    }
    
    public void addNum(int num) {
        minheap.add(num);
        if(minheap.size() > maxheap.size() + 1) maxheap.add(minheap.poll());
        if(!maxheap.isEmpty() && maxheap.peek() >= minheap.peek()){
            int temp = maxheap.poll();
            maxheap.add(minheap.poll());
            minheap.add(temp);
        }
    }
    
    public double findMedian() {
        if(minheap.size() == maxheap.size()) return (minheap.peek() + maxheap.peek())/2.0; 
        if(minheap.size() > maxheap.size()) return minheap.peek()/1.0;
        return maxheap.peek()/1.0;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */