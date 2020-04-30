// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/permutation-equation/problem

int findKey(int v, unordered_map<int, int> &tMap) {

    for (auto j = tMap.begin(); j != tMap.end(); ++j) {
        if (j->second == v)
            return j->first;
    }
    return 0;
}

vector<int> permutationEquation(vector<int> p) {

    int count = 0;
    unordered_map<int, int> tMap;
    vector<int> result;
    int key;

    for (auto &i : p)
        tMap[++count] = i; // keys

    sort(p.begin(), p.end()); // values in order needs to process

    for (auto &i : p) {
        key = findKey(i, tMap);
        key = findKey(key, tMap);

        result.push_back(key);
    }

    return result;
}
