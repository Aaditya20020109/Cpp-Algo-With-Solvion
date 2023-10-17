class Solution {

    public int countPairs(List<List<Integer>> coordinates, int k) {
        int res = 0;
        HashMap<Integer, HashMap<Integer, Integer>> hm = new HashMap<>();
        for (List<Integer> p : coordinates) {
            int x1 = p.get(0), y1 = p.get(1);
            for (int x = 0; x <= k; x++) {
                int x2 = x1 ^ x;
                int y2 = y1 ^ (k - x);

                if (hm.containsKey(x2) && hm.get(x2).containsKey(y2)) res += hm.get(x2).get(y2);
            }

            // hm.computeIfAbsent(x1, x -> new HashMap<>()).put(y1, hm.get(x1).getOrDefault(y1, 0) + 1);
            if (!hm.containsKey(x1)) {
                HashMap<Integer, Integer> map = new HashMap<>();
                hm.put(x1, map);
                hm.get(x1).put(y1, hm.get(x1).getOrDefault(y1, 0) + 1);
            } else {
                hm.get(x1).put(y1, hm.get(x1).getOrDefault(y1, 0) + 1);
            }
        }
        return res;
    }
}
