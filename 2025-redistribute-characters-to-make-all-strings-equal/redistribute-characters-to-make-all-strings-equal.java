class Solution {
    public boolean makeEqual(String[] words) {
        if(words.length==1)return true;
        StringBuilder sb = new StringBuilder();
        for (String s : words) {
            sb.append(s);

        }
        int ch[] = new int[26];
        String str = sb.toString();
        for (char c : str.toCharArray() ) {
            ch[c - 'a']++;

        }
        int freq = words.length;
        for (int e : ch) {
            if ( e%freq!=0) {
               return false;
            }
        }
        return true;
    }
}