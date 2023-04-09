void sort012(int a[], int n)
    {
        // code here 
        int lo=0,high=n-1,mid=0;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[lo],a[mid]);
                l0++;mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
    }

