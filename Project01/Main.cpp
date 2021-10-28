#include "Menu.hpp"
#include "PatientQueue.hpp"

int main() {

	PatientQueue newQueue = PatientQueue();
	PatientQueue processedQueue = PatientQueue();

	initialize_patients(newQueue);

	bool running = 1;

	int userInput;

	int menuInput;

	while (running) {

		print_menu();

		std::cin >> userInput;

		if (userInput > 6 || userInput < 0)
		{
			std::cerr << "Please enter a valid input." << std::endl;
		}
		else {

			if (userInput == 0)
				running = userInput;

			else if (userInput == 1)
				add_patient(newQueue);

			else if (userInput == 2)
				process_patient(newQueue, processedQueue);

			else if (userInput == 3)
				display_queue(newQueue);

			else if (userInput == 4)
				display_processed(processedQueue);

			/*else if (userInput == 5)
				load_queue();

			else if (userInput == 6)
				save_queue();*/
		}

	}

}