public class Solution {
    public static String longestCommonPrefix (String[] strArr){
        String std = "";

        for(int i=0; i<strArr.length-1; i++){
            if(strArr[i].length() < strArr[i+1].length()){
                std = strArr[i];
            }
        }

        String[] stdArr = std.split("");
        String answer = "";
        int cnt = 0;

        for(int i=0; i<strArr.length; i++){
            if(strArr[i].indexOf(stdArr[0]) > 0){
                cnt++;
                // 모두 일치하는 알파벳 있으면 그 다음 비교
                if(cnt==strArr.length){
                    cnt = 0;
                    answer += stdArr[1];
                    for(int j=0; j < stdArr[j].length()-stdArr[j].indexOf(stdArr[j]); j++){
                        for(int k=0; k<strArr.length; k++){
                            if(stdArr[j+1].equals(strArr[strArr[k].indexOf(stdArr[j])+1])){
                                cnt++;
                            }
                        }
                        if(cnt != strArr.length){
                            cnt = 0;
                            answer = "";
                            break;
                        }
                        else{
                            answer += stdArr[j+1];
                        }
                    }
                }
            }
        }
        return answer;

        // list 화
        // 길이가 제일 적은 수 반환
        // 배열에서 추출

    }

    public static void main(String[] args) {
        String[] strs = {"flower","flow","flight"};
        System.out.println(longestCommonPrefix(strs));
    }
}