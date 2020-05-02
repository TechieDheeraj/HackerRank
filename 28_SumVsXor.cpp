// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/sum-vs-xor/problem

// 12/12 test cases passed

long sumXor(long n) {

    long result = 0;
    long countZ = 0;

/*
    OR and XOR result on wherever bit 1 is set is not going to be same because OR will take carry. valid result will be only where bit 0 is available , So counting number of 0 and to calculate possible numbers on bases of number of zeroes will be 2^(no. of zeroes).
*/

    while (n) {
        //countZ += (n % 2) ? 0 : 1; // Even value
        countZ += (n & 1) ? 0 : 1; // Even value
        n >>= 1;
    }
    result = pow(2, countZ);

    return result;
}

/*

// 8/12 test cases passed

long sumXor(long n) {

	long unsigned int result = 1; // As 0 is true for both xor and add

	for (long i = 1; i < n; ++i) { // Can leave n because same number xor will be zero
		if ((n+i) == (n ^ i))
			++result;
	}

	return result;
}

*/
