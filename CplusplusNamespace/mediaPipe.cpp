#include <iostream>
#include "mediaPipe.h"


MediaPipe::calculator::calculator() {
	this->name = "china";
	this->score = 100;
}

MediaPipe::calculator::~calculator() {

}

void MediaPipe::calculator::initial(int score, std::string name) {
	this->score = score;
	this->name = name;
}

void MediaPipe::calculator::print() {
	std::cout << "name: " << this->name << std::endl;
	std::cout << "score: " << this->score << std::endl;
}