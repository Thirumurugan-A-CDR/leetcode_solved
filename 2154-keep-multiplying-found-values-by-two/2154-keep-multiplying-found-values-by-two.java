class Solution {
    public int findFinalValue(int[] nums, int tar) {
        HashSet<Integer> set=new HashSet<>();
        for(int i:nums){
            set.add(i);
        }
        while(set.contains(tar)){
           tar=tar*2;
        }
        return tar;
    }
}