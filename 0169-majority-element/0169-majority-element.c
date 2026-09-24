 int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {
   qsort(nums, numsSize, sizeof(int), compare);
    
    if((numsSize/2)-1==(numsSize/2)){
        return nums[(numsSize/2)-1];
    }else{
        return nums[(numsSize/2)];
    }
    
    
}