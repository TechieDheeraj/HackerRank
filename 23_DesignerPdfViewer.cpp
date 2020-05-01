// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

int designerPdfViewer(vector<int> h, string word) {

    char c = 'a';
    int max = 0;
    int len = word.size();
    int val = 0;
    unordered_map<char, int> hashMap;

    for (auto &i: h) {
        hashMap[c] = i;
        ++c;
    }

    for (int i = 0; i < word.size(); ++i) {
        val = hashMap.at(word[i]);
        if (val > max)
            max = val;
    }

    return len * max; 
}
