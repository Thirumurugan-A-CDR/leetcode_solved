class Solution {
    public boolean canThreePartsEqualSum(int[] arr) {
        int tot=0;
        for(var x:arr){
            tot+=x;
        }
        if(tot%3!=0) return false; 
        int part=tot/3;
        int sum1=0,sum2=0;
        boolean aa=false;
        int i=0;
        for(i=0;i<arr.length;i++){
            if(!aa){
                sum1+=arr[i];
            if(sum1==part){
                aa=true;
            }
            }
            else{
                sum2+=arr[i];
                if(sum2==part){
                    break;
                }
            }
        }
        return sum1==sum2 && i<arr.length-1;
    }
}