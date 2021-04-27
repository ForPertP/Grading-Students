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
