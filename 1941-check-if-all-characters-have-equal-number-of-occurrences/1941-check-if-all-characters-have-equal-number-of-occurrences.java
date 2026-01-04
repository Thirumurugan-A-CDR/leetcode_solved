class Solution {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character,Integer> count=new HashMap<>();
        boolean check =true;
        int first=-1;
        for(char ch:s.toCharArray())
        {
            count.put(ch,count.getOrDefault(ch,0)+1);
        }
        for(Integer val:count.values())
        {
            if(first==-1)
            {
                first=val;
            }
            else
            {
                if(first!=val)
                {
                    check=false;
                    break;
                }
            }
        }
            return check;
    }
}