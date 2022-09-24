
// import java.util.ArrayDeque;
import java.util.ArrayList;
// import java.util.Queue;
import java.util.Stack;

public class GenericTreeConstructor {
    
    public static class Node{
        int data;
        ArrayList<Node> children = new ArrayList<>();
    }
    
    //constructor
    public static Node constructor(int arr[]){
        Node root = null;
        Stack<Node> st = new Stack<>();
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == -1){
                st.pop();
            }else{
                Node nNode = new Node();
                nNode.data = arr[i];
                if(st.isEmpty()){
                    root = nNode;
                }else{
                    st.peek().children.add(nNode);
                }
                st.push(nNode);
            }
        }
        return root;
    }
    
    //display
    public static void display(Node node){
        String str = node.data + " --> ";
        for (Node child : node.children) {
            str += child.data + ", ";
        }
        str += ".";
        System.out.println(str);
        
        for(Node child : node.children){
            display(child);
        }
    }
    
    public static void display2(Node node){
        Stack<Node> st = new Stack<>();
        ArrayList<Integer> alist = new ArrayList<>();
        Stack<Node> st2 = new Stack<>();
        
        st.push(node);
        while(!st.isEmpty()){
            Node value = st.pop();
            alist.add(value.data);
            
            for(Node child : value.children){
                st2.push(child);
            }
            
            while(!st2.isEmpty()){
                st.push(st2.pop());
            }
        }
        
        for(Integer value : alist){
            System.out.print(value + " -> ");
        }
    }
    
    //size
    public static int size(Node node){
        int s = 0;
        for(Node child  : node.children){
            int cs = size(child);
            s = s + cs;
        }
        s = s + 1;
        return s;
    }
    
    //size using stack and loop
    public static int size2(Node node){
        Stack<Node> st = new Stack<>();
        st.push(node);
        int size = 0;
        while(!st.isEmpty()){
            Node value = st.pop();
            size = size + 1;
            
            for(Node child : value.children){
                st.push(child);
            }
        }
        
        return size;
    }
    
    //Maximum of Generic Tree
    public static int max(Node node){
        int max = Integer.MIN_VALUE;
        for(Node child : node.children){
            int cmax = max(child);
            if(cmax > max){
                max = cmax;
            }
        }
        if(node.data > max){
            max = node.data;
        }
        return max;
    }
    
    public static int max2(Node node){
        Stack<Node> st = new Stack<>();
        st.push(node);
        int max = Integer.MIN_VALUE;
        while(!st.isEmpty()){
            Node child = st.pop();
            max = Math.max(max, child.data);
            
            for (Node value : child.children) {
                st.push(value);
            }
        }
        return  max;
    }
    
    public static int height(Node node){
        int h = -1;
        for(Node child : node.children){
            int ch = height(child);
            if(ch > h){
                h = ch;
            }
        }
        h = h + 1;
        return h;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};
        Node root = constructor(arr);
//        int size = size(root);
//        int size2 = size2(root);
//        System.out.println("Size : " + size);
//        System.out.println("Size : " + size2);
//        display(root);
//        display2(root);
//        int max = max(root);
        int max2 = max2(root);
//        System.out.println("max : " + max);
        System.out.println("max : " + max2);
    }
}
