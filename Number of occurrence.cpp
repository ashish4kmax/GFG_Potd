class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstOcc(int arr[], int low, int high, int x) {
	    if(low > high)
		    return -1;

	    int mid = (low + high) / 2;

	    if(x > arr[mid])
		    return firstOcc(arr, mid + 1, high, x);

	    else if(x < arr[mid])
		    return firstOcc(arr, low, mid - 1, x);

	    else {
		    if(mid == 0 || arr[mid - 1] != arr[mid])
			    return mid;

		    else
			    return firstOcc(arr, low, mid - 1, x);
	    }
    }
    
    int lastOcc(int arr[], int low, int high, int x, int n) {
    	if(low > high)
	    	return -1;

    	int mid = (low + high) / 2;

	    if(x > arr[mid])
		    return lastOcc(arr, mid + 1, high, x, n);

	    else if(x < arr[mid])
		    return lastOcc(arr, low, mid - 1, x, n);

	    else {
		    if(mid == n - 1 || arr[mid + 1] != arr[mid])
			    return mid;

		    else
			    return lastOcc(arr, mid + 1, high, x, n);
	   }
    }
    
	int count(int arr[], int n, int x) {
	    // code here
	    int f = firstOcc(arr, 0, n-1, x);
	    int l = lastOcc(arr, 0, n-1, x, n);
	    
	    if(f==-1) return 0;
	    return (l-f)+1;
	}
};
