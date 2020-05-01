// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/equality-in-a-array/problem

int equalizeArray(vector<int> arr) {

    int max = 0;

    unordered_map<int, int> hashMap;

    for (auto &i: arr)
        hashMap[i]++;
    
    for (auto i = hashMap.begin(); i != hashMap.end(); ++i) {
        if (i->second > max)
            max = i->second;
    }

    return (arr.size() - max);
}
