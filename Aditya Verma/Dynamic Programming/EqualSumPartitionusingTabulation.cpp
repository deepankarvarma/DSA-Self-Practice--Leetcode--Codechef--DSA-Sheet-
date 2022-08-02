//Equal sum partition means we have to divide the given array into two subarrays so that 
// the sum of both arrays is equal, the size of these two subarrays may be different
// if it is possible to do that return true else false
// For eg. arr={1,5,5,11}, it can be brokn into two parts {1,5,5} and {11} having equal sums
// only the array is given as an input and no capacity is given.

// very important observation is that an array can be divided into equal sum  iff
// the sum of all its terms is even i.e. 2*s.
// now we have to check if there is a subset whose sum is s, because the sum of rest
//subset will be 2*s-s=s
//this is now reduced to subset sum problem .
