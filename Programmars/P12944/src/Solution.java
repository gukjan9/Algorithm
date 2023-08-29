class Solution {
    public static double solution(int[] arr) {
        double answer = 0;
        for(int i=0; i<arr.length; i++){
            answer += arr[i];
        }
        return answer/arr.length;
    }

    public static void main(String[] args) {
        System.out.println(solution(new int[]{3, 3, 3, 3}));
    }
}