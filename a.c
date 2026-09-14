bool search(int* nums, int numsSize, int target) {
    int l,m,u;
    l = 0;
    u = numsSize - 1;
    while (l <= u)
    {
        m = (l + u )/2;
        if ( nums[m] == target )
        {
            return true;
            break;
        }
        // left side array 
        else if ( nums[l] <= nums[m])
        {
            if(nums[l] <= target && nums[m] > target)
            {
                l = m+1;
            }
            else
            {
                u = m - 1;
            }
        }
        // right side array
        else
        {
            if(nums[m] < target && nums[u] >= target)
            {
                u = m-1;

            }
            else
            {
                l=m+1;
            }
        }
    }
    return false;
}