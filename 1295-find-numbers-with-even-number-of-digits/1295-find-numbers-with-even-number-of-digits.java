class Solution {
    public int findNumbers(int[] nums) {
         int count = 0;
        for(int num : nums){
            if(even(num)) {
                count++;
            }
        }
        return count;
    }
    static boolean even(int num){
        int numberOFdigits = digit2(num);
        return numberOFdigits % 2 == 0;
    }
    static int digit2(int num){
        if(num < 0){
            num = num * -1;
        }
        return (int)(Math.log10(num)) + 1;
    }
}