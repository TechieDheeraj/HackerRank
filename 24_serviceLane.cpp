// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/service-lane/problem

vector<int> serviceLane(vector<int> width, int n, vector<vector<int>> cases) {

	int min = 0;
	vector <int> results;
	// vector<int>::iterator it = width.begin();
	int start = 0, end = 0;

	for (int i = 0; i < cases.size(); ++i) {

		start = cases[i][0];
		end = cases[i][1];

		min = width[start];
		for (int k = start; k <= end; ++k) {
			if (width[k] < min)
				min = width[k];
		} 
		// min = *min_element(it + cases[i][0], it + cases[i][1] +1) // ---> (cases[i][1] + 1) will go out of index if last index is considered but works
		results.push_back(min);
	}

	return results;
}
