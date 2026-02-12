class Solution {
    public String longestCommonPrefix(String[] strs) {
        List<Integer> count=new ArrayList<>();
        if(strs==null ||strs.length==0)return "";
        if (strs.length == 1)
            return strs[0];

        int k=0;
        int c=0;
        for(int i=0;i<strs.length-1;i++)
        {
            char[] arr1=strs[i].toCharArray();
            char[] arr2=strs[i+1].toCharArray();
            c=0;
            k=0;
            while(k<arr1.length && k<arr2.length && arr1[k]==arr2[k] )
            {
                c++;
                k++;
            }
            count.add(c);
        }
        Collections.sort(count);
        int cc=count.get(0);
        if(count.get(0)==0)
            return "";

            String s="";
            int ll=0;
            while(ll<cc)
            {
                s+=strs[0].charAt(ll);
                ll++;
            }
        return s;
        }
}