class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s;
	    vector<string> vec ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	string st;
	for(int i=0; i<words.size(); i++){
		st = "";
		for(int j=0; j<words[i].length(); j++)
			st+=vec[words[i][j]-'a'];
		s.push_back(st);
	}
        sort( s.begin(), s.end() );
        s.erase( unique( s.begin(), s.end() ), s.end() );

        for(int i=0;i<s.size();i++){
            cout<<s[i]<<",";
        }
	return s.size();
    }
};