class Solution
{
    public:
        string shiftingLetters(string s, vector<vector < int>> &shifts)
        {
            int stringLength = s.size();	// Get the length of the string
            vector<int> differenceArray(stringLength, 0);	// Difference array initialized to size n

           	// Step 1: Populate the difference array
            for (const auto &shift: shifts)
            {
                int startIndex = shift[0];	// Starting index of the shift
                int endIndex = shift[1];	// Ending index of the shift
                int shiftDirection = shift[2];	// Direction of the shift (0 or 1)

                if (shiftDirection == 1)
                {
                	// Forward shift
                    differenceArray[startIndex] += 1;	// Increment at start index
                    if (endIndex + 1 < stringLength)
                    {
                        differenceArray[endIndex + 1] -= 1;	// Decrement at end + 1 index
                    }
                }
                else
                {
                	// Backward shift
                    differenceArray[startIndex] -= 1;	// Decrement at start index
                    if (endIndex + 1 < stringLength)
                    {
                        differenceArray[endIndex + 1] += 1;	// Increment at end + 1 index
                    }
                }
            }

           	// Step 2: Compute the prefix sum to get the net shifts for each character
            for (int i = 1; i < stringLength; ++i)
            {
                differenceArray[i] += differenceArray[i - 1];	// Add the value from the previous index
            }

           	// Step 3: Apply the shifts to the string
            for (int i = 0; i < stringLength; ++i)
            {
                int effectiveShift = differenceArray[i] % 26;	// Ensure shift is within the range[0, 25]
                if (effectiveShift < 0)
                    effectiveShift += 26;	// Handle negative shifts (backward)

               	// Apply the shift to character
                s[i] = ((s[i] - 'a' + effectiveShift) % 26) + 'a';
                /*
                    Note : s[i]-'a' gives the corresponding number of character s[i]
                           +effectiveShift adds the shift
                           %26 is to wrap around (0-25)
                           'a' + in the end converts back the number to character
                */
            }

            return s;	// Return the modified string
            
        }
};