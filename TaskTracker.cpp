#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace std;

nlohmann::json j;

struct task {
	int id;
	string description;
	string status; // e.g., "todo", "in-progress", "done"
	string createdAt;
	string updatedAt;

};

int main() {
	cout << "Task Tracker Initialized" << endl;

	// Example of creating a task and serializing it to JSON
	task newTask = { 1, "Implement task tracker", "todo", "2024-06-01T10:00:00Z", "2024-06-01T10:00:00Z" };

	cout << "Creating a new task:" << endl;
	cout << "ID: " << newTask.id << endl;
	cout << "Description: " << newTask.description << endl;
	cout << "Status: " << newTask.status << endl;
	cout << "Created At: " << newTask.createdAt << endl;
	cout << "Updated At: " << newTask.updatedAt << endl;

	// Serialize to JSON
	

	return 0;
}