// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/picking-numbers/problem

int pickingNumbers(vector<int> a) {

    int max = 0;
    vector<int> arr;
    int diff = 0;
    int size = a.size();
    vector<int> indexing(size);

    sort(a.begin(), a.end());

    for (int i = 0; i < (size-1); ++i) { //  4 6 5 3 3 1 -> 1 3 3 4 5 6
        if (indexing[i] == 1)
            continue;

        arr.push_back(a[i]);
        indexing[i] = 1;

        for (int j = i+1; j < size; ++j) {     
            diff = abs((a[i]-a[j]));
            if ( diff <= 1) {
                indexing[j] = 1;
                arr.push_back(a[j]);
            }             
        }

        if (arr.size() > max)
            max = arr.size();

        arr.clear();
    }

    return max;
}
