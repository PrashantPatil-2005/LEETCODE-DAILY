class Solution {
public:
    int majorityElement(vector<int>& num) {
         int majority = num[0], votes = 1;

    for (int i = 1; i < num.size(); i++) {

      if (votes == 0) {
        votes++;
        majority = num[i];
      } else if (majority == num[i]) {
        votes++;
      } else
        votes--;

    }
    return majority;
    }
};