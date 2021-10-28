#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "PatientQueue.hpp"

void	clear();

void	print_menu();

void	add_patient(PatientQueue& patientQueue);

void	process_patient(PatientQueue& workingQueue, PatientQueue& processedQueue);

void	display_queue(PatientQueue& workingQueue);

void	display_processed(PatientQueue& processedQueue);

void initialize_patients(PatientQueue& newQueue);

//void	load_queue();
//
//void	save_queue();