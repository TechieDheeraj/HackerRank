// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/beautiful-triplets/problem

int beautifulTriplets(int d, vector<int> arr) {

	int find = 0;
	int valCount = 0;
	int count = 0;

	for (int i = 0; i < arr.size(); ++i) {
		find = arr[i] + d;
		for (int j = i+1; j < arr.size(); ++j) {
			if (arr[j] == find) {
				++valCount;
				if (valCount == 2)
					break;
				find = arr[j] + d;
			}
		}
		if (valCount == 2)
			++count;
		valCount = 0;
	}
	return count;
}
