vector<int> serviceLane(vector<int> width, int n, vector<vector<int>> cases) {

    int min = 0;
    vector <int> results;
    vector<int>::iterator it = width.begin();
    
    for (int i = 0; i < n; ++i) {
        
            cout << " width[0] " << *(it + cases[i][0]) << " width[1] " << *(it + cases[i][1]) << endl;
            min = *min_element(it + cases[i][0], it + cases[i][1]);
            cout << "min is" << min << endl;
            results.push_back(min);
    }
   
    return results;
}

