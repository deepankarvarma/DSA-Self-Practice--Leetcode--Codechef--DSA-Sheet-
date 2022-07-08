class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        int fin=0;
        for(int i=0;i<sentences.size();i++){
            string temp=sentences[i];
           for(int j=0;j<temp.size();j++){
               cout<<temp[j];
               if(temp[j]==' ')
                   res++;
           }
            if(fin<res+1)
            fin=res+1;
            res=0;
        }
    return fin;
    }
};