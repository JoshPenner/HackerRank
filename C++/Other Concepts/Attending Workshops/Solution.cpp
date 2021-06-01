/*
Problem: https://www.hackerrank.com/challenges/attending-workshops/problem
*/

#include<vector>
#include<algorithm>

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop
{
    int startTime;
    int duration;
    int endTime;
};

struct Available_Workshops
{
    int n;
    Workshop* workshops = new Workshop[n];
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    // return a pointer to an a Available_Workshops object
    Available_Workshops * ptr = new Available_Workshops;

    ptr->n = n;
    
    for(int i =0; i<n; i++)
    {
        ptr->workshops[i].startTime = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].endTime = start_time[i] + duration[i];
    }
    
    return ptr;
}

bool compareEndTimes(const array<int, 2> &a, const array<int, 2>&b)
{
    return a[1] < b[1];
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    // returns max number of workshops student can attend - without overlap
    
    // get number of workshops
    int n = ptr->n;
    
    // create vector of intervals
    vector<array<int, 2>> intervals;
    for(int i=0; i<n; i++)
    {
      intervals.push_back(
          {ptr->workshops[i].startTime, ptr->workshops[i].endTime});
    }
    
    // sort vector of intervals by end times
    sort(intervals.begin(), intervals.end(), compareEndTimes);

    // iterate through intervals
    vector<int> endTimesOptim;
    vector<array<int, 2>>::iterator it = intervals.begin();
    while (it != intervals.end()) {
      // if start time is after earliest finishing time
      if(endTimesOptim.empty() || (*it)[0] >= endTimesOptim.back())
      {
          // add end time to list of optimal end times
          endTimesOptim.push_back((*it)[1]);
      }
      it++;
    }

    return endTimesOptim.size();
}

