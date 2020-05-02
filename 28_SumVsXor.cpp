// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/sum-vs-xor/problem

// TODO: 8/12 test cases passed

long sumXor(long n) {

	long unsigned int result = 1; // As 0 is true for both xor and add

	for (long i = 1; i < n; ++i) { // Can leave n because same number xor will be zero
		if ((n+i) == (n ^ i))
			++result;
	}

	return result;
}
