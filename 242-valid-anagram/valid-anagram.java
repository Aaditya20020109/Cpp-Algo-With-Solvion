class Solution {

    public boolean isAnagram(String s, String t) {
        //from hashMap
        //     if(s.length()!=t.length())return false;
        //     Map<Character,Integer> map = new HashMap<>();
        //     for(char ch:s.toCharArray())
        //     {
        //         map.put(ch,map.getOrDefault(ch,0)+1);

        //     }
        //    for(char ch:t.toCharArray())
        //     {
        //        if(map.containsKey(ch))
        //        {
        //            map.put(ch,map.get(ch)-1);
        //            if(map.get(ch)==0)map.remove(ch);

        //        }
        //        else return false;

        //     }
        //         return map.size()==0;



        // from inbult function APPROACH
        char ch1[] = s.toCharArray();
        char ch2[] = t.toCharArray();
        Arrays.sort(ch1);
        Arrays.sort(ch2);
        return Arrays.equals(ch1,ch2);
    }
}
