#include <iostream>
#include <algorithm>
#include <vector>

struct Meeting 
{
    int start;
    int end;
};
bool comp(Meeting a,Meeting b)
{
    return a.end < b.end ;
}
int maxMeetings(std::vector<Meeting> meetings)
{
    sort(meetings.begin(),meetings.end(),comp);
    int count = 1; // first meeting always got selected
    int previousMeetingEnd = meetings[0].end; 
    for(auto i =1;i< meetings.size();i++)
    {
        if(meetings[i].start>previousMeetingEnd)
        {
            count++;
            previousMeetingEnd= meetings[i].end;
        }
    }
    return count;
}
int main()
{
    std::vector<Meeting> meetings = { {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9} };

    int result = maxMeetings(meetings);

    std::cout << "Maximum number of meetings that can be accommodated: " << result << std::endl;

    return 0;
}