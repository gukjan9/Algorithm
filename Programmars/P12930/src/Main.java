// 이상한 문자 만들기
public class Main {
    public static void main(String[] args) {
        String s = solution("try hello world");
        System.out.println(s);
    }
    public static String solution(String s) {
        String[] arr = s.split("");
        String answer = "";
        int index = 0;

        for(int i=0; i<arr.length; i++){
            // 공백
            if(arr[i].equals(" ")){
                index = 0;
            }
            // 짝수
            else if(index % 2 == 0){
                arr[i] = arr[i].toUpperCase();
                index += 1;
            }
            else if(index % 2 != 0){
                arr[i] = arr[i].toLowerCase();
                index += 1;
            }
            answer += arr[i];
        }
        return answer;
    }
}
