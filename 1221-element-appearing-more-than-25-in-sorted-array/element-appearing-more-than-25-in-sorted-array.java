class Solution {
    static double M = 0.25d;
    public int findSpecialInteger(int[] arr) {
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int e:arr)hm.put(e,hm.getOrDefault(e,0)+1);
        double len = Double.valueOf(arr.length);
        int count = (int)Math.floor(len * M);
        System.out.println(count+ " ");
        for(int key:hm.keySet())
        {
            if(hm.get(key)>count)return key;
        }

        return -1;
    }
}