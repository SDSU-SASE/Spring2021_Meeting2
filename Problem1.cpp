class Solution
{
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime)
    {
        int students = 0;
        for (int counter = 0; counter < startTime.size(); counter++)
        {
            if (startTime[counter] <= queryTime && queryTime <= endTime[counter])
            {
                students++;
            }
        }
        return students;
    }
};
