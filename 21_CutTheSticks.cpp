// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/cut-the-sticks/problem

vector<int> cutTheSticks(vector<int> arr) {

    vector<int>cutArr;
    int min = 0;
    vector<int>stickCut;
    int count = 0;

    while (! arr.empty()) {

        min = *min_element(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = arr[i] - min;
            if (arr[i] != 0)
                cutArr.push_back(arr[i]);

            ++count;
        }

        stickCut.push_back(count);
        count = 0;

        arr.clear();
        arr = cutArr;
        cutArr.clear();  
    }

    return stickCut;
}
