class Solution {
    public void nextPermutation(int[] nums) {
        int len=nums.length;
        int i,pos=-1,temp;
        for(i=len-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pos=i;
                break;
            }
        }
        if(i==-1){
            nums=reverse(nums,0);

        }
        else {
            for (i = len - 1; i > pos; i--) {
                if (nums[i] > nums[pos]) {
                    temp = nums[pos];
                    nums[pos] = nums[i];
                    nums[i] = temp;
                    break;
                }

            }
            nums=reverse(nums,pos+1);
        }
        for(i=0;i<len;i++){
            System.out.println(nums[i]);;
        }


    }
    public static int[] reverse(int[] array, int startingPos){
        int len=array.length-1;
        int i=startingPos,temp;
        while (i<len){
            temp=array[i];
            array[i]=array[len];
            array[len]=temp;
            i++;
            len--;
        }
        return array;

    }
        
    
}