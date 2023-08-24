class Solution{
  public:
    /*You are required to complete below function */
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
    
    string multiplyStrings(string s1, string s2) {
       //Your code here
        if(s1=="0" || s2=="0") return "0";
       
        string new1 = s1, new2 = s2;
        int index1=0,index2=0;
        int i=0;
        while(s1[i]=='-' || s1[i]=='0') {
            index1=i;
            i++;
        }
        
        i=0;
        while(s2[i]=='-' || s2[i]=='0') {
            index2=i;
            i++;
        }
        
        
        int n1 = s1.length();
        int n2 = s2.length();
        cout<<n1<<endl;
        string res = "0";
        if(n2>=n1) {
            string c="";
            for(int i=n1-1;i>=index1;i--) {
                string temp="";
                int carry = 0;
                for(int j=n2-1;j>=index2;j--) {
                    int val = (s1[i]-'0')*(s2[j]-'0')+carry;
                    carry = val/10;
                    temp+=to_string(val%10);
                }
                if(carry>0) temp+=to_string(carry);
                reverse(temp.begin(),temp.end());
                temp+=c;
                res = findSum(res,temp);
                c+="0";
            }
        }
        else {
            string c="";
            for(int i=n2-1;i>=index2;i--) {
                string temp="";
                int carry = 0;
                for(int j=n1-1;j>=index1;j--) {
                    int val = (s2[i]-'0')*(s1[j]-'0')+carry;
                    carry = val/10;
                    temp+=to_string(val%10);
                }
                if(carry>0) temp+=to_string(carry);
                reverse(temp.begin(),temp.end());
                temp+=c;
                res = findSum(res,temp);
                c+="0";
            }
        }
        
        if(new1[0]=='-'&& new2[0]=='-') return res;
        else if(new1[0]=='-'|| new2[0]=='-') res.insert(res.begin(),'-');
        
        return res;
    }
};
