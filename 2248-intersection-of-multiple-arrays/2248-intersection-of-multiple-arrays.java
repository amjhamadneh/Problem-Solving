class Solution {
     public List<Integer> intersection(int[][] arr) {
        List<Integer> list = new ArrayList<>();
        for (int i : arr[0]) {
            if (helper(i, arr, 1)) list.add(i);
        }
        Collections.sort(list);
        return list;
    }

    private static boolean helper(int target, int[][] arr, int start) {
        for (int i = start; i < arr.length; i++) {
            boolean b = false;
            for (int k : arr[i]){
                if (k == target) {
                    b = true;
                    break;
                }
            }
            if (!b) return false;
        }
        return true;
    }
}