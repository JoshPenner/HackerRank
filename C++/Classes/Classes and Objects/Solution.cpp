/*
Problem: https://www.hackerrank.com/challenges/classes-objects/problem
*/

class Student
{
    private:
        int scores[5];
    public:
        void input()
        {
            cin >> scores[0];
            cin >> scores[1];
            cin >> scores[2];
            cin >> scores[3];
            cin >> scores[4];
        }
        int calculateTotalScore()
        {
            return scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
        }
};

