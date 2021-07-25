#include "../include/Statement.hpp"

Statement::Statement(Operation op) {
	this->operation = op;
	this->key = "";
	this->value = "";
}

Statement::Statement(Operation op, std::string k) {
	this->operation = op;
	this->key = k;
	this->value = "";
}

Statement::Statement(Operation op, std::string k, std::string v) {
	this->operation = op;
	this->key = k;
	this->value = v;
}

std::string Statement::getString() noexcept {
	std::string operationString = "";
	if(this->operation == Operation::GET) {
		operationString = "GET";		
	} else if(this->operation == Operation::SET) {
		operationString = "SET";
	} else if(this->operation == Operation::PUT) {
		operationString = "PUT";
	} else if(this->operation == Operation::DELETE) {
		operationString = "DELETE";
	} else {
		operationString = "UNKNOWN";
	}
	return operationString + " " + this->value;
}