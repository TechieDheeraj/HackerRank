// solved by Techie Dheeraj
// https://www.hackerrank.com/test/33gp893pqhs/questions/8dhrrgdc9fa

vector<string> parliamentParties(vector<string> votes) {

    int size = votes.size();
    unordered_map<string, int> hashMap;
    vector<string> results;

    for (auto &i: votes)
        hashMap[i]++;

   for (auto i = hashMap.begin(); i != hashMap.end(); ++i) {
        if (((i->second * 100)/size) >= 5)
            results.push_back(i->first);
   } 
   sort(results.begin(), results.end());

   return results;
}
