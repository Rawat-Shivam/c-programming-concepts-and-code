// for a number to be power of two will 0 in the left most bit and single high bit  
// and for a even number , it will have 0 in the left most bit

//binary representation of (x-1) can be obtained by simply 
//flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1.

/*
	Let, x = 4 = (100)2
	x - 1 = 3 = (011)2
	
	Let, x = 6 = (110)2
	x - 1 = 5 = (101)2
*/


/*
If the number is neither zero nor a power of two, it will have 1 in more than one place.
So if x is a power of 2 then x & (x-1) will be 0.

x & (x-1) will have all the bits equal to the x except for the rightmost 1 in x.
	
	Let, x = 4 = (100)2
	x - 1 = 3 = (011)2
	x & (x-1) = 4 & 3 = (100)2 & (011)2 = (000)2
	
	Let, x = 6 = (110)2
	x - 1 = 5 = (101)2
	x & (x-1) = 6 & 5 = (110)2 & (101)2 = (100)2

*/
