#include <iostream>
#include <string>

using namespace std;

class Quiz
{
public:
    string questions[10] = {
        "1. What is the capital of France?",
        "2. Who wrote 'To Kill a Mockingbird'?",
        "3. What is the chemical symbol for water?",
        "4. Which planet is known as the Red Planet?",
        "5. Who painted the Mona Lisa?",
        "6. What is the largest mammal in the world?",
        "7. What is the tallest mountain in the world?",
        "8. Who developed the theory of relativity?",
        "9. What is the powerhouse of the cell?",
        "10. What is the chemical symbol for gold?"};

    string options[10][4] = {
        {"A. Paris", "B. Rome", "C. Berlin", "D. Madrid"},
        {"A. J.K. Rowling", "B. Harper Lee", "C. George Orwell", "D. Charles Dickens"},
        {"A. H", "B. O", "C. W", "D. H2O"},
        {"A. Mars", "B. Jupiter", "C. Saturn", "D. Venus"},
        {"A. Vincent van Gogh", "B. Pablo Picasso", "C. Leonardo da Vinci", "D. Michelangelo"},
        {"A. Elephant", "B. Blue whale", "C. Giraffe", "D. African elephant"},
        {"A. Mount Everest", "B. K2", "C. Mauna Kea", "D. Kilimanjaro"},
        {"A. Isaac Newton", "B. Albert Einstein", "C. Galileo Galilei", "D. Stephen Hawking"},
        {"A. Mitochondria", "B. Nucleus", "C. Ribosome", "D. Chloroplast"},
        {"A. Go", "B. Gd", "C. Au", "D. Ag"}};

    char correct_answers[10] = {'A', 'B', 'C', 'A', 'C', 'B', 'A', 'B', 'A', 'C'};
    int score;

    Quiz()
    {
        score = 0;
    }

    void displayQuiz()
    {
        cout << "Welcome to the Quiz!" << endl;
        cout << "Please select the correct option for each question:" << endl;

        for (int i = 0; i < 10; ++i)
        {
            cout << questions[i] << endl;
            for (int j = 0; j < 4; ++j)
            {
                cout << options[i][j] << endl;
            }

            char answer;
            cout << "Your answer: ";
            cin >> answer;
            answer = toupper(answer);

            if (answer == correct_answers[i])
            {
                cout << "Correct!" << endl;
                score++;
            }
            else
            {
                cout << "Incorrect!" << endl;
            }
        }
    }

    void displayScore()
    {
        cout << "Your total score is: " << score << endl;

        if (score > 8)
        {
            cout << "Excellent!" << endl;
        }
        else if (score >= 5)
        {
            cout << "Average" << endl;
        }
        else
        {
            cout << "Poor performance" << endl;
        }
    }
};

int main()
{
    Quiz quiz;
    quiz.displayQuiz();
    quiz.displayScore();

    return 0;
}
