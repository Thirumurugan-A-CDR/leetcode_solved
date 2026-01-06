class Solution {
    public List<Integer> intersection(int[][] nums) {
        int max=0;
        for(int s[]:nums)
        {
            for(int val:s)
            {
                if(max<val)
                {
                    max=val;
                }
            }
        }
        int count[]=new int[max+1];
        for(int s[]:nums)
        {
            for(int val:s)
            {
                count[val]++;
            }
        }
        ArrayList<Integer> sol=new ArrayList<>();
        for(int i=0;i<count.length;i++)
        {
            if(count[i]==nums.length)
            {
                sol.add(i);
            }
        }
        return sol;
    }
}