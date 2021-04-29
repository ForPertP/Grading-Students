vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); ++i)
    {
        if (grades[i] > 37)
        {
            switch (grades[i] % 5)
            {
                case 3:
                    grades[i] += 2;
                    break;
                    
                case 4:
                    grades[i] += 1;
                    break;
                    
                default:
                    break;
            }
        }
    }
    
    return grades;    
}

vector<int> gradingStudents2(vector<int> grades)
{
    vector<int> result;

    std::for_each(grades.cbegin(), grades.cend(),
        [&result](auto& score)
        {
            int round = 0;
            int temp = score % 5;
            if (temp != 0)
                round = 5 - temp;

            if (score > 37)
            {
                if (round < 3)
                    result.push_back(score + round);
                else
                    result.push_back(score);
            }
            else
            {
                result.push_back(score);
            }
        }
    );

    return result;
}
