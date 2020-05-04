// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/circular-array-rotation/problem

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    unordered_map<int, int> hashMap;
    int shiftIdx = 0;
    vector<int> results;

    int shiftBy = k % a.size();

    if (shiftBy == 0) {
        for(auto &i : queries)
            results.push_back(a[i]);

        return results;
    }

    for (int i=0; i< a.size(); ++i) {
        shiftIdx = (i + shiftBy) % a.size();
        hashMap[shiftIdx] = a[i];
    }

    for (auto &i : queries) {
        auto j = hashMap.find(i);
        results.push_back(j->second);
    }

    return results;

}
