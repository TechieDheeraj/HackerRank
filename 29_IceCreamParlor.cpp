// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/icecream-parlor/problem

vector<int> icecreamParlor(int m, vector<int> arr) {

    int rem = 0;
    vector <int> results;
    unordered_map <int, int> flavours;

    for (int i = 0; i < arr.size(); ++i)
        flavours[arr[i]] = i+1;
    
    for (int i = 0; i < arr.size(); ++i) {
        rem = m - arr[i];
        auto j = flavours.find(rem);
        if (j != flavours.end()) {
            if (i+1 == j->second) // to get rid of same indices
                continue;
            results.push_back(i+1);
            results.push_back(j->second);
            break;
        }
    }
    return results;
}
