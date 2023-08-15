import java.util.Scanner;

public class LC01 {
    public static void main(String[] args) {
        int count = 0;      // 입력 받을 숫자 수
        int[] num;          // 입력 받은 정수가 저장되는 배열
        int target = 0;
        int result1 = 0;
        int result2 = 0;

        Scanner sc = new Scanner(System.in);
        count = sc.nextInt();
        num = new int[count];

        for (int i = 0; i < count; i++){
            num[i] = sc.nextInt();
        }

        target = sc.nextInt();

        for(int i = 0; i < count-1; i++){
            target -= num[i];
            for(int j = i+1; j < count; j++){
                if(target - num[j] == 0){
                    result1 = i;
                    result2 = j;
                    break;
                }
            }
            target += num[i];
        }
        System.out.println("["+result1+","+result2+"]");
    }
}
