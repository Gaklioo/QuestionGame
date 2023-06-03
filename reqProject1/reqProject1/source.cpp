// 10 questions, 4 awnsers, count corrent and wrong questions
#include <iostream>
#include <vector>
#include <Windows.h>

void questionGame() {
	//Questions from random buzzfeed article :bleh:
	std::string questions[10] = { "What are books libraries categorized and organized based on", "Which element is not made up", "What famous actor has been in a disney animated movie, a pixar movie, and a harry potter movie", "What is the boiling point of water F not C", "When did pablo Picaso die", "Which of these numbers has a 1 in the thousandths place", "WHat type of tea is naturally caffeine-free", "Where is manila", "Which egyptian ruler succeeded the rest", "Which of the following movies was not based on a shakespeare play" };
	std::string awnsers[10][4]{ {"Dewey Decimal System", "Hexadecimal Sorting System", "Peterson Function", "International Alpha Code"}, {"Boriume", "Borion", "barium", "borinum"}, {"Emma Stone", "Emma Thompson", "Emma Watson", "Emma Roberts"}, {"210", "211", "212", "213"}, {"1447", "1676", "1890", "1973"}, {"3.1234", "3.2341", "3.3412", "3.4123"}, {"Red Rea", "Green Tea", "White Tea", "Black tea"}, {"Spain", "The Philippines", "Italy", "Singapore"}, {"Ramses", "King Tut", "Amenhotep", "Cleopatra"}, {"She's the man", "10 things i hate about you", "Clueless", "The Lion King"} };
	int correctAwnsers[10] = { 1, 3, 2, 3, 4, 3, 1, 2, 4, 3 };
	std::cout << "----- Welcome to the guessing games. You will be asked 10 questions, and 4 choices per question. Have fun, and do good.-----";
	Sleep(2000);
	system("CLS");

	int questionCount{};
	int response{};
	int awnsersRow{ 0 };
	int awnserCounter{ 1 };
	int correctAwnserCounter{};
	int incorrectAwnserCounter{};

	while (questionCount <= 9) {
		for (int i = 0; i <= 9; i++) {
			questionCount = i;
			std::cout << "Question #" << (questionCount + 1) << ": " << questions[i] << std::endl;
			for (int k = 0; k < 4; k++) {
				std::cout << awnserCounter << " " << awnsers[awnsersRow][k] << std::endl;
				awnserCounter++;
			}

			std::cout << "Response: ";
			std::cin >> response;
			if (response >= 5) {
				while (response >= 5) {
					std::cout << "Incorrect value enterd. Please enter a valid number." << std::endl;
					std::cin >> response;
				}
			}

			std::cout << "You chose: " << awnsers[awnsersRow][response - 1] << std::endl;
			if (response == correctAwnsers[i]) {
				correctAwnserCounter++;
				std::cout << "You chose correct! Current Score: " << correctAwnserCounter << std::endl;
			}
			else {
				int correctAwnser = correctAwnsers[i];
				std::cout << "You chose wrong. Correct Awnser: " << awnsers[awnsersRow][correctAwnser - 1] << std::endl; // Awnsers
				incorrectAwnserCounter++;
			}
			awnsersRow++;
			awnserCounter = 1;
		}
		std::cout << "************************" << std::endl;
		std::cout << "***** Your Results *****" << std::endl;
		std::cout << "************************" << std::endl;
		std::cout << "Total Questions: " << (questionCount + 1) << std::endl;
		std::cout << "Correct Awnsers: " << correctAwnserCounter << std::endl;
		std::cout << "Wrong Awnsers: " << incorrectAwnserCounter << std::endl;
		break;
	}
}

int main() {
	questionGame();
}