#include "Menu.hpp"
#include "Patient.hpp"

void clear() {

	for (int i = 0; i < 100; i++)
	{
		std::cout << "" << std::endl;
	}
}

void initialize_patients(PatientQueue& newQueue) {


	Patient p = Patient("Halit Glazier", "Hurt knee", 1, 5, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Ioane Acquarone", "Necrotizing Fasciitis", 1, 6, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Kali Aalders", "SARS", 1, 2, 10);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Azad Milojević", "Shingles", 2, 2, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Mile Matsuoka", "Zoonotic Hookworm", 5, 2, 4);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Gianluigi Paredes", "Chickenpox", 3, 2, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Tonalli Randell", "Ehrlichiosis", 1, 2, 8);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Teodoro Ryskamp", "Whitmore's Disease", 1, 8, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Napoleone Vega", "Carrion's Disease", 1, 8, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Shahd Odell", "Gout", 1, 8, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Kiara Ševčík", "Relapsing Fever", 1, 8, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Wolf Kaloyanov", "Allergic rhinitis", 8, 2, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Kennedi Cline", "Tinnitus", 8, 2, 1);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Alojzia Cruz", "Testicular abcess", 1, 4, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Malin Corcráin", "Breast cancer", 3, 2, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Vlastimir Ambrosi", "Urinary tract infection", 1, 6, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Isidor Kowalczyk", "Eye cancer", 1, 3, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Iikka Böhmer", "Penile cancer", 9, 2, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Wulfsige Shafir", "Coma", 1, 6, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Nazih Hodges", "Sunburn", 1, 10, 3);
	newQueue.insert_with_priority(p, p.getPriority());
	p = Patient("Suhm Guy", "Retinoblastoma", 1, 2, 10);
	newQueue.insert_with_priority(p, p.getPriority());
}

void print_menu() {

	std::cout << "===========================================" << std::endl;
	std::cout << "Welcome to Fanshawe's College Medical Center" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Please make a selection then press Enter:" << std::endl;
	std::cout << "1. Add a patient\n2. Process Next Patient In Queue" << std::endl;
	std::cout << "3. Display Queue\n4. View Processed Patients History" << std::endl;
	std::cout << "5. Load Queue From External 'csv' File" << std::endl;
	std::cout << "6. Save Queue To An External 'csv' File" << std::endl;
	std::cout << "0. Exit" << std::endl;

}

void add_patient(PatientQueue& patientQueue) {

	std::string patName = "", patAilm = "";
	short ailmSev = 0, timeCrit = 0, contag = 0;

	bool sevVal = 0;
	bool critVal = 0;
	bool contagVal = 0;

	std::cin.ignore();
	std::cout << "Enter patient name: " << std::endl;
	std::getline(std::cin, patName);

	std::cout << "Enter ailment: " << std::endl;
	std::getline(std::cin, patAilm);

	while (sevVal == 0) {
		std::cout << "Enter severity (1-10): " << std::endl;
		std::cin >> ailmSev;
		if (ailmSev > 10 || ailmSev < 1) {
			std::cerr << "Please enter a valid input." << std::endl;
		}
		else
			sevVal = 1;
	}

	while (critVal == 0) {
		std::cout << "Enter time criticality (1-10): " << std::endl;
		std::cin >> timeCrit;
		if (timeCrit > 10 || timeCrit < 1) {
			std::cerr << "Please enter a valid input." << std::endl;
		}
		else
			critVal = 1;
	}

	while (contagVal == 0) {
		std::cout << "Enter contagiousness (1-10): " << std::endl;
		std::cin >> contag;
		if (contag > 10 || contag < 1) {
			std::cerr << "Please enter a valid input." << std::endl;
		}
		else
			contagVal = 1;
	}

	clear();

	Patient newPatient = Patient(patName, patAilm, ailmSev, timeCrit, contag);

	patientQueue.insert_with_priority(newPatient, newPatient.getPriority());
}

void process_patient(PatientQueue& workingQueue, PatientQueue& processedQueue) {

	if (workingQueue.is_empty())
	{
		clear();
		std::cerr << "There are no patients left to process." << std::endl;
	}
	else {
		clear();
		processedQueue.insert_with_priority(workingQueue.pull_highest_priority_element());

	}

}

void display_queue(PatientQueue& workingQueue) {
	std::string placeholder;
	workingQueue.traverse();
	//method code

}

void display_processed(PatientQueue& processedQueue) {
	display_queue(processedQueue);
	//method code


}
