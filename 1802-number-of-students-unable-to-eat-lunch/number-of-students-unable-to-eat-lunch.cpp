class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int students_1 = 0 , students_0 = 0;

        int  n  = students.size();
        for(int i=0 ; i < n ; i++)
        {

            if(students[i]== 1)
            {
                students_1+=1;
            }
            else
            {
                students_0+=1;
            }
        }




        for(int i=0 ; i<n ; i++)
        {
            if(sandwiches[i] == 0)
            {
                if(students_0==0)return n-i;
                students_0-=1;

            }
            else{

                if(students_1==0)return n-i;
                students_1-=1;

            }

        }


        return 0;
    }
};