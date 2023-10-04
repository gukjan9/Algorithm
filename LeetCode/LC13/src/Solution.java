import java.util.HashMap;
import java.util.Set;

public class Solution {
    public static int romanToInt(String s) {
        String[] arr = s.split("");
        int result = 0;

        HashMap<Integer, String> map = new HashMap<Integer, String>();
        map.put(1, "I");
        map.put(5, "V");
        map.put(10, "X");
        map.put(50, "L");
        map.put(100, "C");
        map.put(500, "D");
        map.put(1000, "M");

        Set<Integer> keySet = map.keySet();

        for(int i=0; i<arr.length; i++){
            if((arr[i].equals(map.get(1)) || arr[i].equals(map.get(10)) || arr[i].equals(map.get(100)) || arr[i].equals(map.get(1000)))
            && (arr[i+1].equals(map.get(5)) || arr[i+1].equals(map.get(50)) || arr[i+1].equals(map.get(500))) {
                result = result + map.get((int)getKey(map, arr[i+1])) - map.get((int)getKey(map, arr[i]));
            }
            else {

            }

        }

        return 0;
    }

    public static Object getKey(HashMap<Integer, String> m, Object value) {
        for(Object o: m.keySet()) {
            if(m.get(o).equals(value)) {
                return o;
            }
        }
        return null;
    }

    public static void main(String[] args) {
        romanToInt("hello");
    }
}
