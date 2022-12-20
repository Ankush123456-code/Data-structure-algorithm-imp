
import java.util.HashMap;
import java.util.Scanner;

public class HighestFrequencyCharacter {
    public static void main(String[] args) {
        try (Scanner scn = new Scanner(System.in)) {
            String str= scn.nextLine();
            HashMap<Character, Integer> hm = new HashMap<>();
            for(int i = 0; i < str.length(); i++){
                char ch = str.charAt(i);
                if(hm.containsKey(ch)){
                    int val = hm.get(ch) + 1;
                    hm.put(ch, val);
                }else{
                    hm.put(ch, 1);
                }
            }
            
            int max = hm.get(str.charAt(0));
            char mfreqch = str.charAt(0);
            for(Character key : hm.keySet()){
                if(max < hm.get(key)){
                    max = hm.get(key);
                    mfreqch = key;
                }
            }
            System.out.println(mfreqch + " " + max);
        }
    }
}
