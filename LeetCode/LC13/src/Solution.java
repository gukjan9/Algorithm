import java.util.ArrayList;

public class Solution {
    public static int romanToInt(String s) {
        String[] arr = s.split("");
        int result = 0;

        ArrayList<String> stringList = new ArrayList<>();
        ArrayList<Integer> integerList = new ArrayList<>();

        stringList.add(0, "I");
        stringList.add(1, "V");
        stringList.add(2, "X");
        stringList.add(3, "L");
        stringList.add(4, "C");
        stringList.add(5, "D");
        stringList.add(6, "M");

        integerList.add(0, 1);
        integerList.add(1, 5);
        integerList.add(2, 10);
        integerList.add(3, 50);
        integerList.add(4, 100);
        integerList.add(5, 500);
        integerList.add(6, 1000);

        if(arr.length == 1){
            return integerList.get(stringList.indexOf(arr[0]));
        }

        for(int i=0; i<arr.length-1; i++){
            if((arr[i].equals(stringList.get(0)) || arr[i].equals(stringList.get(2)) || arr[i].equals(stringList.get(4)) || arr[i].equals(stringList.get(6)))
                && (stringList.indexOf(arr[i]) < stringList.indexOf(arr[i + 1]))) {
                    result += integerList.get(stringList.indexOf(arr[i + 1])) - integerList.get(stringList.indexOf(arr[i]));
                    i++;
            }
            else{
                result += integerList.get(stringList.indexOf(arr[i]));
            }
            if (i == arr.length - 2) {
                result += integerList.get(stringList.indexOf(arr[i+1]));
            }
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(romanToInt("D"));
    }
}
