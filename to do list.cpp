#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task> &todoList, const string &description) {
    Task newTask = {description, false};
    todoList.push_back(newTask);
    cout << "Task added: " << description << endl;
}

void displayTasks(const vector<Task> &todoList) {
    if (todoList.empty()) {
        cout << "No tasks " << endl;
    } else {
        cout << "All Tasks :" << endl;
        for (size_t i = 0; i < todoList.size(); ++i) {
            cout << "[" << (i + 1) << "] ";
            if (todoList[i].completed) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << todoList[i].description << endl;
        }
    }
}

void completeTask(vector<Task> &todoList, size_t index) {
    if (index > 0 && index <= todoList.size()) {
        todoList[index - 1].completed = true;
        cout << "Task marked as completed: " << todoList[index - 1].description << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> todoList; 

    char choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. Display Tasks\n";
        cout << "3. Complete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                {
                    cin.ignore();
                    cout << "Enter task description: ";
                    string description;
                    getline(cin, description);
                    addTask(todoList, description);
                }
                break;
            case '2':
                displayTasks(todoList);
                break;
            case '3':
                {
                    cout << "Enter the index of the task to mark as completed: ";
                    size_t index;
                    cin >> index;
                    completeTask(todoList, index);
                }
                break;
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != '4');

    return 0;
}

