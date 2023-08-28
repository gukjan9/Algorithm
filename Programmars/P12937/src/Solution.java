class Solution {
    public static String solution(int num) {
        String str = (num % 2 == 0) ? "Even" : "Odd";
        return str;
    }

    public static void main(String[] args) {
        System.out.println(solution(3));
    }
}