class Solution {
    public static long[] solution(int x, int n) {
        long[] answer = new long[n];

        for(int i = 0; i<n; i++){
            answer[i] = (long)x*(i+1);
        }
        return answer;
    }

    public static void main(String[] args) {
        for(long i : solution(2, 6)){
            System.out.println(i);
        }
    }
}