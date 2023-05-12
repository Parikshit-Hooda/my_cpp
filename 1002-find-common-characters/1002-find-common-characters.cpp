class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
  vector<int> ans_freq(26, INT_MAX);
  int n=words.size();
  for (int i = 0; i < n; i++)
  {
    vector<int> freq(26,0);
    string word = words[i];
    for (int j = 0; j < word.size(); j++)
      freq[word[j] - 'a']++;

    for (int j = 0; j < 26; j++)
      ans_freq[j] = min(ans_freq[j], freq[j]);
  }

   vector<string> ans;
  for (int i = 0; i < 26; i++)
  {
    while (ans_freq[i] != 0)
    {
      string s="";
      char c = 'a' + i;
      s=s+c;
      ans.push_back(s);
      ans_freq[i]--;
    }
  }
    return ans;

    }
};