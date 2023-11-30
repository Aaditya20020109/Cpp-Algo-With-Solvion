class Solution {

    public int[] findDiagonalOrder(List<List<Integer>> nums) {
        int rowLen = nums.size();
        int size = 0;
        TreeMap<Integer, List<Integer>> hm = new TreeMap<>();
        for (int i = rowLen - 1; i >= 0; i--) {
            List<Integer> row = nums.get(i);
            for (int j = 0; j < row.size(); j++) {
                int key = i + j;
                if (!hm.containsKey(key)) {
                    List<Integer> value = new ArrayList<>();
                    hm.put(key, value);
                }
                hm.get(key).add(row.get(j));
                size++;
            }
        }
        int res[] = new int[size];
        int j = 0;
        for (int key : hm.keySet()) {
            List<Integer> V = hm.get(key);
            for (int k = 0; k < V.size(); k++) {
                res[j++] = V.get(k);
            }
        }
        return res;
    }
}
