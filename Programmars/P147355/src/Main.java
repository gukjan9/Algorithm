public class Main {
    public static void main(String[] args) {
        String p = "324";
        String t = "43534523425";
        int result = 0;

        for (int i = 0; i < t.length()-p.length()+1; i++) {
            // 런타임 에러 - Long 으로 변환
            if (Long.parseLong(t.substring(i, i+p.length())) <= Long.parseLong(p)) {
                result++;
            }
        }
        System.out.println(result);
    }
}
