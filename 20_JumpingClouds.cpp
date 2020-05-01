// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

int jumpingOnClouds(vector<int> c) {

    int size = c.size()-1;
    int index = 0;
    int jumps = 0;
    int maxjump = 2; // max jump can be taken

    while (index < size) {

      if (c[index + maxjump] != 1)
         index = index+maxjump;
      else
         index = index + maxjump - 1;

      jumps++;

      if (index == size)
        break;
    }   

    return jumps; 
}
