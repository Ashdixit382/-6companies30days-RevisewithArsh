class Solution {
public:
     void solve(int index,string digits,string output,vector<string> &ans,string mapping[]){
         if(index >= digits.length()){
             ans.push_back(output);
             return;
         }

         int number = digits[index] - '0';
         string value = mapping[number];
         for(int i=0;i<value.length();i++){
             output.push_back(value[i]);
             solve(index+1,digits,output,ans,mapping);
             output.pop_back();
         }
     }
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        if(digits == ""){
            return ans;
        }
        
        string output = "";
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,output,ans,mapping);
        return ans;
    }
};