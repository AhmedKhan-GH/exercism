#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    
    std::vector<int> result;
    while(!student_scores.empty())
    {
        result.push_back(static_cast<int>(student_scores.back()));
        student_scores.pop_back();
    }
    std::reverse(result.begin(), result.end());
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int result{0};

    for(int student : student_scores){
        if (student <= 40){
            result += 1;
        }
    }
    // TODO: Implement count_failed_students
    return result;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int lowest_score {40};
    int increment = (highest_score - lowest_score) / 4;
 
    std::array<int, 4> result;

    for(int i = 0; i < 4; i++)
    {
        result[i] = lowest_score+1+i*increment;
    }
    
    return result;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {

    std::vector<std::string> result;

    for(int i = 0; i < student_scores.size(); ++i)
    {
        result.push_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }

    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for(int i = 0; i < student_scores.size(); ++i)
        {
            if(student_scores[i] == 100)
            {
                return student_names[i];
            }
        }
    return "";
}
