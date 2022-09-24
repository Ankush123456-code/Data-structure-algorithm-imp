public class AddNode {
    
    public static class Node{
        int data;
        Node next;
    }
    public static class LinkedList{
        Node head;
        Node tail;
        int size;
        
        void add(int val){
            Node nNode = new Node();
            nNode.data = val;
            nNode.next = null;
            
            if(size == 0){
                head = tail = nNode;
            }else{
                tail.next = nNode;
                tail = nNode;
            }
            size+=1;
        }
    }
    
    public static void main(String[] args) {
        
    }
}
