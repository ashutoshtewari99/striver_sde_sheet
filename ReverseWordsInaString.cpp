class Solution {
public:
    string reverseWords(string S) 
    {
        int n = S.length();
   
   stack<string> st;
   for(int i = 0; i < n; i++){
       string temp = "";
       if(S[i] == ' '){
           continue;
       }
       while(S[i] != ' ' && i < n){
           temp += S[i];
           i++;
       }
       st.push(temp);
   }
   string ans = "";
   while(!st.empty()){
       ans += st.top();
       st.pop();
       if(!st.empty()){
           ans += ' ';
       }
   }
   return ans; 
    }
};