class Solution {
public:
    map<int,string> m;
    vector<string> ans;



    vector<string> letterCombinations(string digits) {


        m.insert({2,"abc"});
        m.insert({3,"def"});
        m.insert({4,"ghi"});
        m.insert({5,"jkl"});
        m.insert({6,"mno"});
        m.insert({7,"pqrs"});
        m.insert({8,"tuv"});
        m.insert({9,"wxyz"});

        
        if(digits.size() == 0)return {};

        if(digits.size() == 1)
        {
            int n = digits[0] - '0';

            string str = m[n];


            for(int i=0 ; i<str.size() ; i++)
            {
                string s = "";
                s.push_back(str[i]);
                ans.push_back(s);

            }

            return ans;
            
        }


        if(digits.size() == 2)
        {
            string n1 = m[digits[0] - '0'];
            string n2 = m[digits[1] - '0'];

            for(int i=0; i<n1.size() ; i++)
            {
                string str = "";
                str.push_back(n1[i]);
                for(int j=0 ; j<n2.size() ; j++)
                {
                    string str_1 = "";
                    str_1.push_back(n2[j]);
                    ans.push_back(str + str_1);


                }
            }

            

            
        }


        if(digits.size() == 3)
        {

            string n1 = m[digits[0] - '0'];
            string n2 = m[digits[1] - '0'];
            string n3 = m[digits[2] - '0'];

            for(int i=0; i<n1.size() ; i++)
            {
                string str = "";
                str.push_back(n1[i]);
                for(int j=0 ; j<n2.size() ; j++)
                {
                    string str_1 = "";
                    str_1.push_back(n2[j]);
                    for(int k=0 ; k < n3.size() ; k++)
                    {
                        string str_2 = "";
                        str_2.push_back(n3[k]);
                        ans.push_back(str+str_1+str_2);

                    }


                }
            }
        }

        if(digits.size() == 4)
        {

               string n1 = m[digits[0] - '0'];
            string n2 = m[digits[1] - '0'];
            string n3 = m[digits[2] - '0'];
            string n4 = m[digits[3] - '0'];

            for(int i=0; i<n1.size() ; i++)
            {
                string str = "";
                str.push_back(n1[i]);
                for(int j=0 ; j<n2.size() ; j++)
                {
                    string str_1 = "";
                    str_1.push_back(n2[j]);
                    for(int k=0 ; k < n3.size() ; k++)
                    {
                        string str_2 = "";
                        str_2.push_back(n3[k]);
                        for(int p=0 ; p<n4.size() ; p++)
                        {
                            string str_3 = "";
                            str_3.push_back(n4[p]);
                            ans.push_back(str + str_1 + str_2 + str_3);
                        }

                    }


                }
            }

        }



        
     return ans;   
        
    }
};