class Solution {
    

    public boolean isPathCrossing(String path) {

    Set<String> hs  = new HashSet<>();
    hs.add("0_0");
        int n = path.length();
        int p1 = 0, p2 = 0;
        for (char ch : path.toCharArray()) {
          

            if (ch == 'N') {
                p2++;
            } else if (ch == 'S') {
                p2--;
            } else if (ch == 'E') {
                p1++;
            } else {
                p1--;
            }
            String key =String.valueOf(p1)+"_"+String.valueOf(p2);
            if(hs.contains(key)){return true;}
            hs.add(key);

        }
        

        return false;
    }
}