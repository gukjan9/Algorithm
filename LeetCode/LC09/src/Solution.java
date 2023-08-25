class Solution {
    public static void main(String[] args) {
        System.out.println(isPalindrome(13));

    }
    public static boolean isPalindrome(int x) {
        String[] arr = Integer.toString(x).split("");
        // System.out.println(arr.length);

        // 음수는 일단 안됨
        if(x < 0){
            return false;
        }
        else{
            // 일의 자리는 무조건 true
            if(arr.length == 1){
                return true;
            }
            // 홀수일 때
            else if(arr.length % 2 == 1) {
                for (int i = 1; i <= arr.length / 2; i++) {
                    if(!arr[arr.length / 2 - i].equals(arr[arr.length / 2 + i])){
                        return false;
                    }
                }
            }
            else{
                // 십의 자리일 때
                if(arr.length < 3){
                   return (arr[0].equals(arr[1])) ? true : false;
                }
                // 짝수일 때
                else{
                    for(int i=1; i<=arr.length/2; i++){
                        if(!arr[arr.length/2-i].equals(arr[arr.length/2+i-1])){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
}