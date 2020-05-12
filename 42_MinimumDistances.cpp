// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/minimum-distances/problem

int minimumDistances(vector<int> a) {

    int min = 10000000;
    int end = a.size()-1;
    unordered_set<int> hashSet;

    for (int i = 0; i <= end; ++i) {
        for (int j = i+1; j <= end; ++j) {
            if (a[i] == a[j] && hashSet.count(a[j]) != 1) {
                    if (abs(j-i) < min)
                        min = abs(j-i);
                    hashSet.insert(a[j]);
            }
        }
    }
    if (hashSet.size() == 0)
        return -1;
        
    return min;
}
