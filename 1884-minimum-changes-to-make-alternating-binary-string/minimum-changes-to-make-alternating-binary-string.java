
class Solution {
    public String finalString_2(int length) {
        boolean z = false;

        String res = "";
        while (res.length() != length) {
            if (z) {
                res += '0';
                z = !z;
            } else {
                res += '1';
                z = !z;
            }
        }
        return res;
    }

    public String finalString(int length) {
        boolean z = true;

        String res = "";
        while (res.length() != length) {
            if (z) {
                res += '0';
                z = !z;
            } else {
                res += '1';
                z = !z;
            }
        }
        return res;
    }

    public int minOperations(String s) {
        String finalStr = finalString(s.length());
        String finalStr_2 = finalString_2(s.length());
        int i = 0;
        int res = 0, res_1 = 0;
        while (i < s.length()) {
            if (s.charAt(i) != finalStr.charAt(i))
                res++;
            i++;
        }
        i = 0;
        while (i < s.length()) {
            if (s.charAt(i) != finalStr_2.charAt(i))
                res_1++;
            i++;
        }
        return Math.min(res,res_1);

    }
}