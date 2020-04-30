// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/sock-merchant/problem

int sockMerchant(int n, vector<int> ar) {

    int pairs = 0;
    int num = 0;

    unordered_map<int, int> hashMap;

    for (auto &i :ar)
        hashMap[i]++;
    
    for (auto i = hashMap.begin(); i != hashMap.end(); ++i) {
        num = (i->second ) / 2;
     
        if (num > 0) 
            pairs += num;    
    }

    return pairs;
}
